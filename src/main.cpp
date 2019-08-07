#include <main.h>

void setup() {
  irReceive.enableIRIn();
  #ifdef VERBOSE
  Serial.begin(9600);
  #endif

  leftWheel.setSpeed(speed);
  rightWheel.setSpeed(speed);
}

void loop() {
  respondToIRRemote();
}

void respondToIRRemote() {
  if (irReceive.decode(&irResults)) {
    switch (irResults.value) {
      case BTN_0: setSpeed(0); break;
      case BTN_1: setSpeed(70); break;
      case BTN_2: setSpeed(100); break;
      case BTN_3: setSpeed(125); break;
      case BTN_4: setSpeed(150); break;
      case BTN_5: setSpeed(175); break;
      case BTN_6: setSpeed(200); break;
      case BTN_7: setSpeed(220); break;
      case BTN_8: setSpeed(240); break;
      case BTN_9: setSpeed(255); break;

      case BTN_FORWARD:
        VERBOSE_PRINT("go to: forward");
        leftWheel.forward();
        rightWheel.forward();
        break;
      case BTN_BACKWARD:
        VERBOSE_PRINT("go to: backward");
        leftWheel.backward();
        rightWheel.backward();
        break;
      case BTN_RIGHT:
        VERBOSE_PRINT("move to: right");
        leftWheel.forward();
        rightWheel.stop();
        break;
      case BTN_LEFT:
        VERBOSE_PRINT("move to: left");
        leftWheel.stop();
        rightWheel.forward();
        break;
      case BTN_OK:
        VERBOSE_PRINT("stop");
        leftWheel.stop();
        rightWheel.stop();
    }

    irReceive.resume();
  }
}
