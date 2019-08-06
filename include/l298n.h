#include <L298N.h>

#define IN1 5
#define IN2 6
#define IN3 7
#define IN4 8
#define ENA 9
#define ENB 10

L298N leftWheel(ENA, IN1, IN2);
L298N rightWheel(ENB, IN3, IN4);

unsigned short speed = 0;

void setSpeed(u16 value);
void setSpeed(u16 value) {
    speed = value;
    leftWheel.setSpeed(speed);
    rightWheel.setSpeed(speed);
}
