/*
  Controlling Servo Motor with Joystick
  by Abdullah Fayad
*/

#include <Servo.h> //include the servo library

Servo s;  // create object of servo type

void setup() {
  s.attach(6);  // attaches the servo on pin 6 (PWM pin)
}

void loop() {
  int input = analogRead(0);            // reads the value of the pin of the Joystick (connected to the A0 analog pin) and store it in 'input' variable (value between 0 and 1023)
  input = map(input, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  s.write(input);                  // sets the servo position according to the scaled value
  delay(15);                           // waits 15ms for the servo to get there
}
