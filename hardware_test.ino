#include <Arduino.h>
#define I_ATT A0
#define I_DEC A1
#define I_SUST A2
#define I_REL A3
#define I_CUTOFF A4
#define I_RESO A5
#define I_AMT A6
#define I_TUN A7
#define I_MIDI 1
#define I_PUSH 2
#define LED1 3
#define LED2 4
#define I_SWITCH 11

void setup(){
   Serial.begin(9600); 

}
void loop(){
    Serial.println(I_ATT);
    Serial.println(I_DEC);
    Serial.println(I_SUST);
    Serial.println(I_REL);
    Serial.println(I_CUTOFF);
    Serial.println(I_RESO);
    Serial.println(I_AMT);
    Serial.println(I_TUN);
    Serial.println(I_PUSH);
    Serial.println(I_SWITCH);
    delay(1000);
}
