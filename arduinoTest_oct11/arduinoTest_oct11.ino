#include <Stepper.h>

void setup() {

Stepper(200,)

step
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
  // pin 13 is connected to integrated LED on arduinot 
  // this setup just tells the arduino "Hey, we're going to be...""
  // working with pin 13, be ready"

void loop() {


  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
//(what pin, what do we want to do with it ex: on or off)
// high means on i guess?up you click the 'send' arrow at the top left of this
// HIGH = on, LOW = off .... for this test
delay(500);

//lets make it blink by adding low

digitalWrite(13,LOW);
delay(500);
//once set, send and it compiles then loads onto arduino


}
