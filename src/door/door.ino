// Docs: https://docs.arduino.cc/tutorials/generic/basic-servo-control/
#include <Servo.h>

Servo myservo;

int pos = 0;

void setup()
{
  // pin number 9
  myservo.attach(9);
}

void loop()
{
  for (pos = 0; pos <= 90; pos += 1)
  {
    myservo.write(pos);
    delay(100);
  }
  
  for (pos = 90; pos >= 0; pos -= 1)
  {
    myservo.write(pos);
    delay(100);
  }
}
