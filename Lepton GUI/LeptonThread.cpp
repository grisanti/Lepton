#include "ui_Lepton.h"
#include "LeptonThread.h"

#include "Palettes.h"
#include "SPI.h"
#include "Lepton_I2C.h"
#include "MyLabel.h"

#include <QMessageBox>


#define PACKET_SIZE 164
#define PACKET_SIZE_UINT16 (PACKET_SIZE/2)
#define PACKETS_PER_FRAME 60
#define FRAME_SIZE_UINT16 (PACKET_SIZE_UINT16*PACKETS_PER_FRAME)
#define FPS 27


LeptonThread::LeptonThread() : QThread()
{
}

LeptonThread::~LeptonThread() 
{
}

void LeptonThread::run()
{
	
	//create the initial image
	myImage = QImage(80, 60, QImage::Format_RGB888);

	//open spi port
	SpiOpenPort(0);

	while(true) 
	{

		//read data packets from lepton over SPI
		int resets = 0;
		for(int j=0;j<PACKETS_PER_FRAME;j++) 
		{
			//if it's a drop packet, reset j to 0, 
			//set to -1 so he'll be at 0 again loop
			read(spi_cs0_fd, result+sizeof(uint8_t)*PACKET_SIZE*j, sizeof(uint8_t)*PACKET_SIZE);
			int packetNumber = result[j*PACKET_SIZE+1];
			if(packetNumber != j) 
			{
				j = -1;
				resets += 1;
				usleep(1000);
                /*
                 * Note: we've selected 750 resets as an arbitrary limit, since there
                 * should never be 750 "null" packets between two valid transmissions
                 * at the current poll rateBy polling faster, developers may easily
                 * exceed this count and the down period between frames may then be
                 * flagged as a loss of sync
                 */
				if(resets == 750) 
				{
					SpiClosePort(0);
					usleep(750000);
					SpiOpenPort(0);
				}
			}
		}
		if(resets >= 30) 
		{
			qDebug() << "done reading, resets: " << resets;
		}

		frameBuffer = (uint16_t *)result;
		int row, column;
		uint16_t value;
		uint16_t minValue = 65535;
		uint16_t maxValue = 0;

		
		for(int i=0;i<FRAME_SIZE_UINT16;i++) 
		{
			//skip the first 2 uint16_t's of every packet, 
			//they're 4 header bytes
			if(i % PACKET_SIZE_UINT16 < 2) 
			{
				continue;
			}
			
			//flip the MSB and LSB at the last second
			int temp = result[i*2];
			result[i*2] = result[i*2+1];
			result[i*2+1] = temp;
			
			value = frameBuffer[i];
			if(value > maxValue) 
			{
				maxValue = value;
			}
			if(value < minValue) 
			{
				minValue = value;
			}
			column = i % PACKET_SIZE_UINT16 - 2;
			row = i / PACKET_SIZE_UINT16 ;
		}

		float diff = maxValue - minValue;
		float scale = 255/diff;
		QRgb color;
		for(int i=0;i<FRAME_SIZE_UINT16;i++) 
		{
			if(i % PACKET_SIZE_UINT16 < 2) 
			{
				continue;
			}
			value = (frameBuffer[i] - minValue) * scale;
			const int *colormap = colormap_ironblack;
			color = qRgb(colormap[3*value], colormap[3*value+1], colormap[3*value+2]);
			column = (i % PACKET_SIZE_UINT16 ) - 2;
			row = i / PACKET_SIZE_UINT16;
			myImage.setPixel(column, row, color);
		}

		//emit the signal for update
		emit updateImage(myImage);
	}
		
	SpiClosePort(0);
}

void LeptonThread::saveImage()
{
	QString currentDirectory = QDir::current().path();
	QString caption = tr("Save Image");
	QString filter = tr("Images (*.tif)");

	QString fileName = QFileDialog::getSaveFileName(0, caption, currentDirectory, filter); 
	if (fileName.isEmpty())
		return;
	else 
	{
		QString RawName = fileName;		
		QString TifName = fileName.append(".tif");		
		//save image
		QImageWriter writer(TifName, "tif");	
		writer.setCompression(0);
		writer.write(myImage);
		
		RawName = RawName.append(".raw");		
		QFile file(RawName);
		file.open(QIODevice::WriteOnly);
		QDataStream out(&file);   
		for(int i=0;i<FRAME_SIZE_UINT16;i++) 
		{
			if(i % PACKET_SIZE_UINT16 < 2) 
			{
				continue;
			}
			out << frameBuffer[i];       
		}
	}
 }				 

void LeptonThread::performFFC() 
{
	//perform FFC
	lepton_perform_ffc();
}

void LeptonThread::freezeVideo() 
{
	//freeze video
	lepton_freezeVideo();
}

void LeptonThread::liveVideo() 
{
	//freeze video
	lepton_liveVideo();
}

void LeptonThread::enableAGC() 
{
	//enable AGC
	lepton_enableAGC();
}

void LeptonThread::disableAGC() 
{
	//disable AGC
	lepton_disableAGC();
}

void LeptonThread::enableSBNUC() 
{
	//enable Scene Based NUC
	lepton_enableSBNUC();
}

void LeptonThread::disableSBNUC() 
{
	//disable Scene Based NUC
	lepton_disableSBNUC();
}

void LeptonThread::whiteHotVideo() 
{
	//video polarity white hot
	lepton_whiteHotVideo();
}

void LeptonThread::blackHotVideo() 
{
	//video polarity black hot
	lepton_blackHotVideo();
}

unsigned long long int LeptonThread::getflirSN() 
{
	//Get camera SN
	return(lepton_getSN());
}

unsigned long int LeptonThread::getUptime() 
{
	//Get camera uptime
	return(lepton_getUptime());
}

float LeptonThread::getAuxTemp() 
{
	//Get aux temperature
	return(lepton_getAuxTemp());
}

float LeptonThread::getFPATemp() 
{
    //Get FFP temperature
	return(lepton_getFPATemp());
}
