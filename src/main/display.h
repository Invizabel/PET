#include "door.h"

void myDisplay()
{
  unsigned long myHours = round(counter / 60 / 60);
  unsigned long myMinutes = round(counter / 60 - (myHours * 60));

  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.setCursor(10, 20);

  char buffer[16];
  snprintf(buffer, sizeof(buffer), "%02lu:%02lu", myHours, myMinutes);
    
  display.print(buffer);
  display.display();
}
