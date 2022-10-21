#include <Stepper.h>

const int stepsPerRevolution = 200;
//200 = NEMA 17 motor


// instance of Stepper, put on pints 8 through 11
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);



void setup() {
  // put your setup code here, to run once:


//60rpm
  myStepper.setSpeed(60);

  //initialize the serial port
  Serial.begin(9600);



}

void loop() {
  //revolves once in one direction, then one in the other


  Serial.print("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);

  Serial.print("counterClockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);

  int motorSpeed = 100;
//read sensor:
//int senorReading = analogRead(A0);
//map it to range from 0 to 100:
//int motorSpeed = map(sensorReading, 0, 1023, 0, 100);
//set motor speed
//example if statement
  if (stepsPerRevolution < 100) {
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stepsPerRevolution / 100);
  }





  // put your main code here, to run repeatedly:

}
