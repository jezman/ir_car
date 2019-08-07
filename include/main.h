#include <Arduino.h>
#include <irrecv.h>
#include <l298n.h>

#define VERBOSE

#ifdef VERBOSE
#define VERBOSE_PRINT(str) Serial.println(str)
#else
#define VERBOSE_PRINT(str)
#endif

void respondToIRRemote();
