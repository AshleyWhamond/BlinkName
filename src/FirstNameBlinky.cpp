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

const int UNIT = 300;              // single Morse unit
const int DOT = UNIT;              // dot duration
const int DASH = UNIT * 3;         // dash duration
const int CHAR_SPACE = UNIT;       // space between parts of letter
const int LETTER_SPACE = UNIT * 3; // space between letters
const int END_WORD = UNIT * 7;     // space between words

const std::string A = ".-";
const std::string B = "-...";
const std::string C = "-.-.";
const std::string D = "-..";
const std::string E = ".";
const std::string F = "..-.";
const std::string G = "--.";
const std::string H = "....";
const std::string I = "..";
const std::string J = ".---";
const std::string K = "-.-";
const std::string L = ".-..";
const std::string M = "--";
const std::string N = "-.";
const std::string O = "---";
const std::string P = ".--.";
const std::string Q = "--.-";
const std::string R = ".-.";
const std::string S = "...";
const std::string T = "-";
const std::string U = "..-";
const std::string V = "...-";
const std::string W = ".--";
const std::string X = "-..-";
const std::string Y = "-.--";
const std::string Z = "--..";

const int arrLength = 6;
std::string FIRST_NAME[arrLength] = {A, S, H, L, E, Y};

void transLetter(std::string letter)
{
  for (unsigned int i = 0; i < letter.length(); i++)
  {
    //Particle.publish("letter", letter[0]);
    if (letter[i] == '.')
    {
      digitalWrite(light, HIGH); // turn the LED on (HIGH is the voltage level)
      delay(DOT);                // display for length of DOT
      digitalWrite(light, LOW);  // turn the LED off by making the voltage LOW
      delay(CHAR_SPACE);         // wait for length of
    }
    else
    {
      digitalWrite(light, HIGH); // turn the LED on (HIGH is the voltage level)
      delay(DASH);               // display for length of DOT
      digitalWrite(light, LOW);  // turn the LED off by making the voltage LOW
      delay(CHAR_SPACE);         // wait for length of
    }
  }
  delay(LETTER_SPACE);
}

void displayWord(std::string word[arrLength]){
 
  for(int i = 0; i < arrLength; i++)
  {
    transLetter(word[i]);
  }

}

void setup()
{
  pinMode(light, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  displayWord(FIRST_NAME);
  delay(END_WORD);
}
