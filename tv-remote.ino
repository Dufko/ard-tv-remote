#define EXCLUDE_EXOTIC_PROTOCOLS
#include <IRremote.hpp>
//#include "Arduino.h"
#include <LowPower.h>

//const int IR_RECEIVE_PIN = 2;
const int IR_SEND_PIN = 12;

const int BUTTON_1_PIN = 8;
const int BUTTON_2_PIN = 9;
/*functionname,protocol,device,subdevice,function
0,RC5,0,-1,0
,RC5,0,-1,0
1,RC5,0,-1,1
,RC5,0,-1,1
2,RC5,0,-1,2
,RC5,0,-1,2
3,RC5,0,-1,3
,RC5,0,-1,3
4,RC5,0,-1,4
,RC5,0,-1,4
5,RC5,0,-1,5
,RC5,0,-1,5
6,RC5,0,-1,6
,RC5,0,-1,6
7,RC5,0,-1,7
,RC5,0,-1,7
8,RC5,0,-1,8
,RC5,0,-1,8
9,RC5,0,-1,9
,RC5,0,-1,9
POWER,RC5,0,-1,12
,RC5,0,-1,12
MUTE,RC5,0,-1,13
,RC5,0,-1,13
EXIT,RC5,0,-1,15
,RC5,0,-1,15
STATUS,RC5,0,-1,15
VOLUME +,RC5,0,-1,16
,RC5,0,-1,16
VOLUME -,RC5,0,-1,17
,RC5,0,-1,17
TV GUIDE + UP,RC5,0,-1,28
,RC5,0,-1,28
UP,RC5,0,-1,28
DOWN,RC5,0,-1,29
,RC5,0,-1,29
TV GUIDE + DOWN,RC5,0,-1,29
CHANNEL +,RC5,0,-1,32
,RC5,0,-1,32
CHANNEL -,RC5,0,-1,33
,RC5,0,-1,33
A/CH,RC5,0,-1,34
,RC5,0,-1,34
ALT. AUDIO,RC5,0,-1,35
,RC5,0,-1,35
SLEEP,RC5,0,-1,38
,RC5,0,-1,38
RIGHT,RC5,0,-1,43
,RC5,0,-1,43
LEFT,RC5,0,-1,44
,RC5,0,-1,44
M,RC5,0,-1,46
,RC5,0,-1,46
MENU,RC5,0,-1,46
TV GUIDE + SETUP,RC5,0,-1,46
GREEN,RC5,0,-1,47
,RC5,0,-1,47
RED,RC5,0,-1,54
,RC5,0,-1,54
YELLOW,RC5,0,-1,55
,RC5,0,-1,55
EXT. INPUT,RC5,0,-1,56
,RC5,0,-1,56
BLUE,RC5,0,-1,58
,RC5,0,-1,58
DTV FREEZE,RC5,0,-1,93
,RC5,0,-1,93
*/
void setup() {
  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
  IrSender.begin(IR_SEND_PIN, DISABLE_LED_FEEDBACK);

  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(LED_BUILTIN, LOW);

  /*
  for(int i = 0;i<0xff;++i){
    if(i % 0x10 == 0){
      digitalWrite(LED_BUILTIN,HIGH);
      delay(3000);
      digitalWrite(LED_BUILTIN,LOW);
    }

    delay(100);
    IrSender.sendRC6(i,0x41,1,false);
    

  }  */
  //41 exit
  //20 end?
  //21 home
  //22 exit?
  //0xc turn off / on
  //  IrSender.sendRC6(0,0x26,0,false);
    delay(30000);
    IrSender.sendRC5(0, 43, 0, false);  //right
    delay(1000);
    IrSender.sendRC5(0, 29, 0, false);  //down
    delay(1000);
    IrSender.sendRC5(0, 29, 0, false);  //down
    delay(1000);
    IrSender.sendRC5(0, 43, 0, false);  //right
  //IrSender.sendRC6(0,0x21,0,false); //UP
  //delay(1000);
  //IrSender.sendRC6(0,0x21,0,false); //DOWN
  /*
  for(int i = 0x20;i<0x2f;++i){
    IrSender.sendRC6(0,i,0,false);
    delay(1000);
  }
  */

  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {

  delay(211500);
  IrSender.sendRC5(0, 43, 0, false);  //right

}