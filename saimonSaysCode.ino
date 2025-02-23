// C++ code
//

// Defining macros and constants
/////////////////////////////////////////////////////////////

// external outputs
const int LED_BLUE = 13;
const int LED_GREEN = 12;
const int LED_RED = 11;
const int LED_YELLOW = 10;

// external inputs
const int BUTTON_BLUE = 7;
const int BUTTON_GREEN = 6;
const int BUTTON_RED = 5;
const int BUTTON_YELLOW = 4;


int blueButton = 0;
int greenButton = 0;
int redButton = 0;
int yellowButton = 0;


void setup()
{
  //initialising output pins
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  
  //initializing input pins
  pinMode(BUTTON_BLUE, INPUT);
  pinMode(BUTTON_GREEN, INPUT);
  pinMode(BUTTON_RED, INPUT);
  pinMode(BUTTON_YELLOW, INPUT);
  
  
  
}

void loop()
{
  blueButton = digitalRead(BUTTON_BLUE);
  greenButton = digitalRead(BUTTON_GREEN);
  redButton = digitalRead(BUTTON_RED);
  yellowButton = digitalRead(BUTTON_YELLOW);
  
  digitalWrite(LED_BLUE,!(blueButton));
  digitalWrite(LED_GREEN,!(greenButton));
  digitalWrite(LED_RED,!(redButton));
  digitalWrite(LED_YELLOW,!(yellowButton));
  
  
}