#ifndef LEPTON_I2C
#define LEPTON_I2C

void lepton_perform_ffc();
void lepton_whiteHotVideo();
void lepton_blackHotVideo();
void lepton_freezeVideo();
void lepton_liveVideo();
void lepton_enableAGC();
void lepton_disableAGC();
void lepton_enableSBNUC();
void lepton_disableSBNUC();
unsigned long long int lepton_getSN();
unsigned long int lepton_getUptime();
float lepton_getAuxTemp();
float lepton_getFPATemp();

#endif
