#include <Arduino.h>

long MainLoop()
{
  //local variable declaration
  int x = 0;
  // do loop execution
  do 
  {
    Serial.print("value of X: ");
    Serial.println(x);
    delay(1000);
    x++;
  }while (x <= 20);
  //return x;
}

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  MainLoop();
  // put your main code here, to run repeatedly:
}
