#include <Stepper.h>


//sensor should be on analog input 0

#define STEPS 200
//this is for NEMA 17, 200 steps per revolution



//create instance of stepper class, specifying steps
//and the pins it's attached to (these might be different)
Stepper stepper(STEPS, 8, 9, 10, 11);

// the previous reading from the analog input
int previous = 0;

void setup() {
  // put your setup code here, to run once:
  stepper.setSpeed(30);
  // this makes it 30 RPMs


}

void loop() {
  // put your main code here, to run repeatedly:


  // get the sensor value
  // uint8_t pin.  ???
  int val = analogRead(0);

  //move a number of steps equal to change in sensor
  stepper.step(val - previous);

  // remember the previous val of sensor


  previous = val;



}
