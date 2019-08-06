#include <Arduino.h>
#include <irrecv.h>

#define UART_DEBUG 1

void setup() {
  irReceive.enableIRIn();

  #if UART_DEBUG
  Serial.begin(9600);
  Serial.println("IR Receiver enabled.");
  #endif
}

void loop() {
  if (irReceive.decode(&irResults)) {
    #if UART_DEBUG
    Serial.println(irResults.value, HEX);
    #endif

    irReceive.resume();
  }
}
