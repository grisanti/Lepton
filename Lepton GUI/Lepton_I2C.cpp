#include <iostream>
#include <string>

#include "ui_Lepton.h"
#include "Lepton_I2C.h"

#include "leptonSDKEmb32PUB/LEPTON_SDK.h"
#include "leptonSDKEmb32PUB/LEPTON_SYS.h"
#include "leptonSDKEmb32PUB/LEPTON_AGC.h"
#include "leptonSDKEmb32PUB/LEPTON_VID.h"
#include "leptonSDKEmb32PUB/LEPTON_Types.h"

bool _connected;

LEP_CAMERA_PORT_DESC_T _port;
LEP_SYS_FLIR_SERIAL_NUMBER_T sysSN;
LEP_UINT32 sysUptime;
LEP_SYS_AUX_TEMPERATURE_CELCIUS_T sysAuxTemp;
LEP_SYS_FPA_TEMPERATURE_CELCIUS_T sysFPATemp;

int lepton_connect() 
{
	LEP_OpenPort(1, LEP_CCI_TWI, 400, &_port);
	_connected = true;
	return 0;
}

void lepton_perform_ffc() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_RunSysFFCNormalization(&_port);
}

void lepton_whiteHotVideo() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_SetVidPolarity(&_port,LEP_VID_WHITE_HOT);
}

void lepton_blackHotVideo() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_SetVidPolarity(&_port,LEP_VID_BLACK_HOT);
}

void lepton_freezeVideo() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_SetVidFreezeEnableState(&_port,LEP_VID_FREEZE_ENABLE);
}

void lepton_liveVideo() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_SetVidFreezeEnableState(&_port,LEP_VID_FREEZE_DISABLE);
}

void lepton_disableAGC() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_SetAgcEnableState(&_port,LEP_AGC_DISABLE);
}

void lepton_enableAGC() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_SetAgcEnableState(&_port,LEP_AGC_ENABLE);
}

void lepton_disableSBNUC() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_SetVidSbNucEnableState(&_port,LEP_VID_SBNUC_DISABLE);
}

void lepton_enableSBNUC() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_SetVidSbNucEnableState(&_port,LEP_VID_SBNUC_ENABLE);
}

unsigned long long int lepton_getSN() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_GetSysFlirSerialNumber(&_port,&sysSN);
	return(sysSN);
}

unsigned long int lepton_getUptime() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_GetSysCameraUpTime(&_port,&sysUptime);
	return(sysUptime);
}

float lepton_getAuxTemp() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_GetSysAuxTemperatureCelcius(&_port,&sysAuxTemp);
	return(sysAuxTemp);
}

float lepton_getFPATemp() 
{
	if(!_connected) 
	{
		lepton_connect();
	}
	LEP_GetSysFpaTemperatureCelcius(&_port,&sysFPATemp);
	return(sysFPATemp);
}
