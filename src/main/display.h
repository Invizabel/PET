#include "door.h"

void myDisplay()
{
  unsigned long myHours = round(counter / 60 / 60);
  unsigned long myMinutes = round(counter / 60 - (myHours * 60));

  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.setCursor(10, 10);

  char buffer1[32];
  snprintf(buffer1, sizeof(buffer1), "Left: %02lu:%02lu", myHours, myMinutes);
  display.print(buffer1);

  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.setCursor(10, 20);
  
  char buffer2[32];
  snprintf(buffer2, sizeof(buffer2), "Interval: %02lu:00", intervalHours);
  display.print(buffer2);
  
  display.display();
}
