#include "door.h"

void myDisplay()
{
  unsigned long myHours = round(counter / 60 / 60);
  unsigned long myMinutes = round(counter / 60 - (myHours * 60));

  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(10, 20);

  char buffer[6];
  strcpy(buffer, (char *) myHours);
  strcpy(buffer + strlen(buffer), ":");
  strcpy(buffer + strlen(buffer), (char *) myHours);
    
  display.print(buffer);
  display.display();
}
