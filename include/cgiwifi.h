#ifndef CGIWIFI_H
#define CGIWIFI_H

#include "httpd.h"

enum { wifiIsDisconnected, wifiIsConnected, wifiGotIP };

void statusWifiUpdate(uint8_t state);
int cgiWiFiScan(HttpdConnData *connData);
int cgiWifiInfo(HttpdConnData *connData);
int cgiWiFi(HttpdConnData *connData);
int cgiWiFiConnect(HttpdConnData *connData);
int cgiWiFiSetMode(HttpdConnData *connData);
int cgiWiFiConnStatus(HttpdConnData *connData);
int cgiWiFiSpecial(HttpdConnData *connData);
void wifiInit(void);

extern uint8_t wifiState;
extern void (*wifiStatusCb)(uint8_t); // callback when wifi status changes

#endif