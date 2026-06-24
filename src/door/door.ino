// Docs: https://docs.arduino.cc/tutorials/generic/basic-servo-control/
#include <Servo.h>

Servo myServo;

// Position of servo motor:
int pos = 0;
// Feeding countdown counter:
unsigned int counter = 0;
// Used for the seven segment display and time in between feeds:
unsigned long startTime = millis();
// Get time last measured:
unsigned long endTime = 0;
// Declare how many seconds in an hour:
unsigned long secondsToHours = 3600;

void setup()
{
  // Pin number 9:
  myServo.attach(9);
  // Center the servo motor (Important):
  myServo.write(0);
  // Wait for things to be setup:
  delay(5000);
}

void loop()
{
  // Feed pet after 12 hours twice a day as per https://www.animalhumanesociety.org/resource/feeding-your-dog-or-cat:
  if (counter == 0)
  {
    // Rotate the servo motor 80 degrees to start dispensing food:
    for (pos = 0; pos <= 135; pos += 1)
    {
      myServo.write(pos);
      delay(10);
    }

    // Wait for food to dispense:
    delay(3000);

    // Rotate the servo motor 80 degrees to stop dispensing food:
    for (pos = 135; pos >= 0; pos -= 1)
    {
      myServo.write(pos);
      delay(10);
    }

    // Reset counter
    counter = 12 * secondsToHours;
  }

  // Timer logic:
  startTime = millis();
  if (startTime - endTime >= 1000)
  {
     endTime = startTime;
     counter -= 1;
  }
}
