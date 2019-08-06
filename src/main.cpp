#include <main.h>

void setup() {
  irReceive.enableIRIn();

  leftWheel.setSpeed(speed);
  rightWheel.setSpeed(speed);
}

void loop() {
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
        leftWheel.forward();
        rightWheel.forward();
        break;
      case BTN_BACKWARD:
        leftWheel.backward();
        rightWheel.backward();
        break;
      case BTN_RIGHT:
        leftWheel.forward();
        rightWheel.stop();
        break;
      case BTN_LEFT:
        leftWheel.stop();
        rightWheel.forward();
        break;
      case BTN_OK:
        leftWheel.stop();
        rightWheel.stop();
    }

    irReceive.resume();
  }
}
