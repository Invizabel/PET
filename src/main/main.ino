// Docs: https://docs.arduino.cc/tutorials/generic/basic-servo-control/
#include "display.h"

void setup()
{
  // Pin number 9:
  myServo.attach(9);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop()
{
  // Feed pet after 12 hours twice a day as per https://www.animalhumanesociety.org/resource/feeding-your-dog-or-cat:
  if (counter == 0)
  {
    myDoor();
    // Reset counter
    counter = 12 * secondsToHours;
  }

  // Timer logic:
  startTime = millis();
  if (startTime - endTime >= 1000)
  {
    endTime = startTime;
    counter -= 1;
    //myDisplay();
  }
}
