#include "globals.h"

void myDoor()
{   
  // Reset the servo motor to 0 (Important):
  myServo.write(0);

  // Rotate the servo motor 120 degrees to start dispensing food:
  for (pos = 0; pos <= 120; pos += 1)
  {
    myServo.write(pos);
    delay(10);
  }
  
  // Wait for food to dispense:
  delay(2000);

  // Rotate the servo motor 120 degrees to stop dispensing food:
  for (pos = 120; pos >= 0; pos -= 1)
  {
    myServo.write(pos);
    delay(10);
  }
}
