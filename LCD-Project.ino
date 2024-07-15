#include <LiquidCrystal.h>

// Define the LCD pins
const int rs = 12;
const int en = 11;
const int d1 = 5;
const int d2 = 4;
const int d3 = 3;
const int d4 = 2;

// Initialize the LCD object
LiquidCrystal myLCD(rs, en, d1, d2, d3, d4);

void setup() {
  // Initialize random seed
  randomSeed(analogRead(0));
  Serial.begin(9600);
  
  // Initialize the LCD
  myLCD.begin(16, 2);
  
  // Clear the LCD screen
  myLCD.clear();
  
  // Set the cursor to column 0, row 0
  myLCD.setCursor(0, 0);
  
  // Print a static message
  myLCD.print("Random Number:");
}

void loop() {
  // Generate a random number between 1 and 10
  int myMsgNumber = random(1, 11);  // Note: upper bound is exclusive
  
  // Set the cursor to column 0, row 1
  myLCD.setCursor(0, 1);
  
  // Clear the second row
  myLCD.print("                ");
  
  // Set the cursor to column 0, row 1 again
  myLCD.setCursor(0, 1);
  
  // Print "My msg: " followed by the random number
  myLCD.print("My msg: ");
  myLCD.print(myMsgNumber);
  
  // Wait for 1 second
  delay(1000);
  
  // Clear the second row again
  myLCD.setCursor(0, 1);
  myLCD.print("                ");
  
  // Set the cursor to column 0, row 1 once more
  myLCD.setCursor(0, 1);
  
  // Use a switch statement to display different messages based on the random number
  switch(myMsgNumber) {
    case 1:
      myLCD.print("Hello!");
      break;
    case 2:
      myLCD.print("Hello Word");
      break;
    case 3:
      myLCD.print("Hello Word!");
      break;
    case 4:
      myLCD.print("Hello Word!");
      break;
    case 5:
      myLCD.print("Hello Word!");
      break;
    case 6:
      myLCD.print("Hello Word!");
      break;
    case 7:
      myLCD.print("Hello Word!");
      break;
    case 8:
      myLCD.print("Hello Word!");
      break;
    case 9:
      myLCD.print("Hello Word!");
      break;
    case 10:
      myLCD.print("Hello Word!");
      break;
    default:
      myLCD.print("Error");
      break;
  }
  
  Serial.println(myMsgNumber);
  
  // Wait for 2 seconds before generating a new number
  delay(2000);
}