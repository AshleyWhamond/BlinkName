/*
 * Project FirstNameBlinky
 * Description: Task 2.1P
 * Author: Ashley Whamond
 * Date: 15/04/2022
 */
int light = D7;

const int UNIT = 300;              // single Morse unit
const int DOT = UNIT;              // dot duration
const int DASH = UNIT * 3;         // dash duration
const int CHAR_SPACE = UNIT;       // space between parts of letter
const int LETTER_SPACE = UNIT * 3; // space between letters
const int END_WORD = UNIT * 7;     // space between words

//Set up variables to map letters to morse code
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

//define array to hold first name. This is ugly but c++ is a horrible language whose types are too restrictive :(
const int arrLength = 6;
std::string FIRST_NAME[arrLength] = {A, S, H, L, E, Y};

//function to map the . or - of input letter to LED behaviour
void transLetter(std::string letter)
{
  for (unsigned int i = 0; i < letter.length(); i++)
  {
    if (letter[i] == '.')
    {
      digitalWrite(light, HIGH); // turn the LED on (HIGH is the voltage level)
      delay(DOT);                // display for length of DOT
      digitalWrite(light, LOW);  // turn the LED off by making the voltage LOW
      delay(CHAR_SPACE);         // add some space between each morse char
    }
    else
    {
      digitalWrite(light, HIGH); 
      delay(DASH);               
      digitalWrite(light, LOW);  
      delay(CHAR_SPACE);         
    }
  }
  delay(LETTER_SPACE); // longer space between morse letters
}

//Function that uses the input word (FIRST_NAME) as an array, then calls transLetter to translate letter to morse led bahaviour
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

void loop()
{
  displayWord(FIRST_NAME);
  delay(END_WORD);
}
