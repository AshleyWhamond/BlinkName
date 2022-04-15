/*
 * Project FirstNameBlinky
 * Description: Task 2.1P
 * Author: Ashley Whamond
 * Date: 15/04/2022
 */
int light = D7;


const int UNIT = 300;               // single Morse unit
const int DOT = UNIT;               // dot duration
const int DASH = UNIT * 3;          // dash duration
const int CHAR_SPACE = UNIT;        // space between parts of letter
const int LETTER_SPACE = UNIT * 3;  // space between letters
const int END_WORD = UNIT * 7;    // space between words

const int letterLength = 300; // write function to determein letter translations


void letter(){
  int count = 0;
  while (count < letterLength){
    digitalWrite(light, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DOT);                        // display for length of DOT
    digitalWrite(light, LOW);    // turn the LED off by making the voltage LOW
    delay(CHAR_SPACE);                 // wait for length of 
    count++;
  }
  delay(LETTER_SPACE);
}


// the loop function runs over and over again forever
void loop() {
  delay(END_WORD);
}
