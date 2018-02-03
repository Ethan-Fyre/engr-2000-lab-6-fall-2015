/*  
 Lab 6 Controlling a servo position using a potentiometer 
 Ethan Sayles
 Augdan Wilson

*/

#include <Servo.h>

Servo left;  //set servos left and right
Servo right;

int PpinL = 0; //assign a potentiometer pin for left servo
int PpinR = 1; //assign a potentiometer pin for right servo

void setup()
{
  left.attach(9);  // attach the left servo to the servo object
  right.attach(10);// attach the right servo to the servo object
}

void loop() 
{ 
  int valueL = analogRead(PpinL);      //get a value from the left potentiometer
  int valueR = analogRead(PpinR);      //get a value from the right potentiometer
  //valueL = map(valueL,0,1023,1300,1700);    *alternative method*
  //valueR = map(valueR,0,1023,1300,1700);    *alternative method*
  valueL = (valueL*25)/64 + 1300;    //convert said value to a useful format
  valueR = (valueR*25)/64 + 1300;    //convert said value to a useful format
  left.writeMicroseconds(valueL);    //cause left servo to turn at the value
  right.writeMicroseconds(valueR);   //cause right servo to turn at the value
                            
} 

