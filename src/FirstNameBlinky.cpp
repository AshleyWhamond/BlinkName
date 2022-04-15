/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/ashkl/Desktop/Deakin_22/SIT_210/Week_2/task2.1/FirstNameBlinky/src/FirstNameBlinky.ino"
/*
 * Project FirstNameBlinky
 * Description: Task 2.1P
 * Author: Ashley Whamond
 * Date: 15/04/2022
 */
void setup();
void loop();
#line 7 "c:/Users/ashkl/Desktop/Deakin_22/SIT_210/Week_2/task2.1/FirstNameBlinky/src/FirstNameBlinky.ino"
int light = D7;

// setup() runs once, when the device is first turned on.
void setup() {
  pinMode(light, OUTPUT);

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  digitalWrite(light, HIGH);
  delay(250);
  digitalWrite(light, LOW);
  delay(250);
}