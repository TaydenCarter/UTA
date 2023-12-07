#include <Servo.h>
Servo Servo1; //Initializing Servo
int ang1=0; //Servo Starting angle is 0

//Assigning variables to pins on the shield/arduino
const int StepX = 2;
const int DirX = 5;
const int StepY = 3;
const int DirY = 6;
const int StepZ = 4;
const int DirZ = 7;
const int StepA = 12; //Pins 12 and 13 have to be jumped on the CNC Shield
const int DirA = 13;


void setup() {
  pinMode(StepX,OUTPUT); //StepX is Left Arm
  pinMode(DirX,OUTPUT);
  pinMode(StepY,OUTPUT); //StepY is Right arm
  pinMode(DirY,OUTPUT);
  pinMode(StepZ,OUTPUT); //StepZ is Left cam
  pinMode(DirZ,OUTPUT);
  pinMode(StepA, OUTPUT); //StepA is Right cam
  pinMode(DirA, OUTPUT);

  pinMode(A0, OUTPUT); //A0 pin on the CNC Shield is the Abort Pin
  Servo1.attach(A0); //This attaches the servo to the A0 pin on the Arduino
  Servo1.write(ang1);

}

void loop()
{
  delay(2000);

  for(int x = 0 ; x < 34 ; x++) //This is to move in the arms simultaneously 34 steps
  {
    digitalWrite(DirX, HIGH); //CW
    digitalWrite(DirY, LOW); //CCW
    digitalWrite(StepX, HIGH);
    digitalWrite(StepY, HIGH);
    delayMicroseconds(6000);
    digitalWrite(StepX, LOW);
    digitalWrite(StepY, LOW);
    delayMicroseconds(6000);
  }
  delay(1000);

  for(int x = 0 ; x < 18 ; x++) //This is to rotate both cams to raise base 18 steps.
  {
    digitalWrite(DirZ, LOW); //CCW
    digitalWrite(DirA, HIGH); //CW
    digitalWrite(StepZ, HIGH);
    digitalWrite(StepA, HIGH);
    delayMicroseconds(1000); //Test different delay times to see if it raises the base easier.
    digitalWrite(StepZ, LOW);
    digitalWrite(StepA, LOW);
    delayMicroseconds(1000);
  }
  delay(1000);

  for(ang1 = 0 ; ang1 <= 180 ; ang1+=1) //Rotates servo 180 degrees
  {
    Servo1.write(ang1);
    delay(37);
  }

  delay(1000);

  for(int x = 0 ; x < 50 ; x++) //This is to rotate both cam to lower base 50 steps. 
  {
    digitalWrite(DirZ, HIGH); //CW
    digitalWrite(DirA, LOW); //CCW
    digitalWrite(StepZ, HIGH);
    digitalWrite(StepA, HIGH);
    delayMicroseconds(2000);
    digitalWrite(StepZ, LOW);
    digitalWrite(StepA, LOW);
    delayMicroseconds(2000);
  }
  delay(1000);

  for(int x = 0 ; x < 25 ; x++) //This is to retract the arms 20 steps
  {
    digitalWrite(DirX, LOW); //CCW
    digitalWrite(DirY, HIGH); //CW
    digitalWrite(StepX, HIGH);
    digitalWrite(StepY, HIGH);
    delayMicroseconds(2000);
    digitalWrite(StepX, LOW);
    digitalWrite(StepY, LOW);
    delayMicroseconds(2000);
  }
  delay(30000); //Give the group 30 seconds to unplug the machine
}