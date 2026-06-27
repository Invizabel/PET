#include <Adafruit_SSD1306.h>
#include <Servo.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Servo Motor variable
Servo myServo;

// Position of servo motor:
int pos = 0;

// Feeding countdown counter:
unsigned long counter = 1;

// Used for the seven segment display and time in between feeds:
unsigned long startTime;

// Get time last measured:
unsigned long endTime = 0;

// Declare how many seconds in an hour:
unsigned long secondsToHours = 3600;

// Declare the display and set its size
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
