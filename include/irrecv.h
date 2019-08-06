#include "IRremote.h"

#define IR_RECEIVE_PIN 11

// buttons hex codes
#define BTN_0 0xFF4AB5
#define BTN_1 0xFF6897
#define BTN_2 0xFF9867
#define BTN_3 0xFFB04F
#define BTN_4 0xFF30CF
#define BTN_5 0xFF18E7
#define BTN_6 0xFF7A85
#define BTN_7 0xFF10EF
#define BTN_8 0xFF38C7
#define BTN_9 0xFF5AA5
#define BTN_FORWARD 0xFF629D
#define BTN_BACKWARD 0xFFA857
#define BTN_LEFT 0xFF22DD
#define BTN_RIGHT 0xFFC23D
#define BTN_OK 0xFF02FD
#define BTN_STAR 0xFF42BD
#define BTN_GRID 0xFF52AD

IRrecv irReceive(IR_RECEIVE_PIN);
decode_results irResults;
