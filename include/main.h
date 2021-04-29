#pragma once

#include <ESP8266WebServer.h>
#include <LinkedList.h>

#include "utils.h"

using utils::Beep;

#define VERSION "1.0"
#define SERVER "Bleep/" VERSION

#define BEEP_QUEUE 128

/**
 * Pin configuration for the Bleep IoT device.
 */
#define LED0_PIN D0
#define LED1_PIN D4
#define BUZZER_PIN D2

#ifndef IWSSID
# error "The Wi-Fi SSID is not defined in the 'config.h' file !."
#endif

#ifndef IWPASSWD
# error "The Wi-Fi Password is not defined in the 'config.h' file !."
#endif

ESP8266WebServer server(80);
LinkedList<Beep*> beeps;

const char* ssid = IWSSID;
const char* passwd = IWPASSWD;

const int led0 = LED0_PIN;
const int led1 = LED1_PIN;
const int buzzer = BUZZER_PIN;

void HTTPsetup();
