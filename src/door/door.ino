// Docs: https://docs.arduino.cc/tutorials/generic/basic-servo-control/
#include <Servo.h>

Servo myservo;

int pos = 0;

void setup()
{
  // Pin number 9
  myservo.attach(9);
  // Center the servo motor
  myservo.write(90);
  // Wait for things to be setup
  delay(5000);
}

void loop()
{
  for (pos = 0; pos <= 90; pos += 1)
  {
    myservo.write(pos);
    delay(10);
  }

  delay(1000);
  
  for (pos = 90; pos >= 0; pos -= 1)
  {
    myservo.write(pos);
    delay(10);
  }

  delay(1000);
}
