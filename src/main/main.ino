// Docs: https://docs.arduino.cc/tutorials/generic/basic-servo-control/
#include "display.h"

void setup()
{
  Serial.begin(9600);
  
  myServo.attach(9);
  startTime = millis();
  
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  
  delay(500);
}

void loop()
{
  // Feed pet after 12 hours twice a day as per https://www.animalhumanesociety.org/resource/feeding-your-dog-or-cat:

  // Timer logic:
  startTime = millis();
  if (startTime - endTime >= 1000)
  {
    endTime = startTime;
    counter -= 1;
    
    if (counter == 0)
    {
      myDoor();
      // Reset counter
      counter = 12 * secondsToHours;
    }
    
    myDisplay();
  }
}
