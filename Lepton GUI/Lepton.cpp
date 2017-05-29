/*
 * Lepton.cpp
 * 
 * Copyright 2016 Ames Grisanti <ames.grisanti@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <string>

#include "ui_Lepton.h"
#include "LeptonThread.h"
#include "MyLabel.h"

#define HPIXELS	80
#define VPIXELS 60
#define IMAGE_COLS 640
#define IMAGE_ROWS 480

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *widget = new QWidget;
	QImage myImage;
	
	Ui::Lepton ui;
	ui.setupUi(widget);

	//create an image placeholder for myLabel
	myImage = QImage(IMAGE_COLS, IMAGE_ROWS, QImage::Format_RGB888);

	//create a label, and set it's image to the placeholder
	MyLabel myLabel(widget);
	myLabel.setGeometry(10, 10, IMAGE_COLS, IMAGE_ROWS);
	myLabel.setPixmap(QPixmap::fromImage(myImage));

	//create a thread to gather SPI data
	//when the thread emits updateImage, the label should update its image accordingly
	LeptonThread *thread = new LeptonThread();
	QObject::connect(thread, SIGNAL(updateImage(QImage)), &myLabel, SLOT(setImage(QImage)));
	
	//connect save button to the thread's save action
	QObject::connect(ui.SaveButton, SIGNAL(clicked()), thread, SLOT(saveImage()));	

	//connect ffc button to the thread's ffc action
	QObject::connect(ui.UpdateFFC, SIGNAL(clicked()), thread, SLOT(performFFC()));	

	//connect White Hot to the thread's white hot video action
	QObject::connect(ui.WhiteHot, SIGNAL(clicked()), thread, SLOT(whiteHotVideo()));

	//connect Black Hot to the thread's black hot video action
	QObject::connect(ui.BlackHot, SIGNAL(clicked()), thread, SLOT(blackHotVideo()));

	//connect Freeze On to the thread's video freeze action
	QObject::connect(ui.FreezeOn, SIGNAL(clicked()), thread, SLOT(freezeVideo()));

	//connect Freeze Off to the thread's video freeze action
	QObject::connect(ui.FreezeOff, SIGNAL(clicked()), thread, SLOT(liveVideo()));

    //connect AGC On to the thread's video AGC on action
	QObject::connect(ui.AGCOn, SIGNAL(clicked()), thread, SLOT(enableAGC()));

    //connect AGC Off to the thread's video AGC on action
	QObject::connect(ui.AGCOff, SIGNAL(clicked()), thread, SLOT(disableAGC()));

    //connect SB NUC On to the thread's video SB NUC on action
	QObject::connect(ui.SBNUCOn, SIGNAL(clicked()), thread, SLOT(enableSBNUC()));

    //connect SB NUC Off to the thread's video SB NUC on action
	QObject::connect(ui.SBNUCOff, SIGNAL(clicked()), thread, SLOT(disableSBNUC()));

	thread->start();
	
	ui.FLIR_SN->setPlainText(QString::number(thread->getflirSN()));
	ui.Uptime->setPlainText(QString::number(thread->getUptime()));
	ui.AuxTemp->setPlainText(QString::number(thread->getAuxTemp()));
	ui.FPATemp->setPlainText(QString::number(thread->getFPATemp()));
	
	widget->show();

	return app.exec();
 }
