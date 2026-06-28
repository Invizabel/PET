#include "display.h"

void myControls()
{
  currentState1 = digitalRead(button1);
  currentState2 = digitalRead(button2);
  
  if (lastState1 == HIGH && currentState1 == LOW && intervalHours < 24)
  {
    intervalHours += 1;
    myDisplay();
  }

  if (lastState2 == HIGH && currentState2 == LOW && intervalHours > 0)
  {
    intervalHours -= 1;
    myDisplay();
  }

  lastState1 = currentState1;
  lastState2 = currentState2;
  
}
