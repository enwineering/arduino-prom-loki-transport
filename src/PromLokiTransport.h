#ifndef PromLokiTransport_H
#define PromLokiTransport_H

#include "PLTransport.h"

#if defined(ESP32)

#include "ESP32Client.h"
typedef ESP32Client PromLokiTransport;

#elif defined(ESP8266)

#error "ESP8266 is currently unsupported, it's proving too difficult to wokr around the 4k stack size limitation at the moment."

#elif defined(ARDUINO_SAMD_MKRGSM1400)

#error "MKRGSM1400 is unsupported by this library - use the original grafana one."

#elif defined(ARDUINO_SAMD_MKRWIFI1010)

#error "MKRWIFI1010 is unsupported by this library - use the original grafana one."

#else 

#error "Unknown board type, PromLokiTransport does not support this board."

#endif // Types

#endif // PromLokiTransport_H
