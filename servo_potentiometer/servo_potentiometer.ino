#include <Servo.h>
Servo servo; 
void setup() {
  servo.attach(5); 
}

void loop() {
  int a = analogRead(A0); 
  int radian = map(a, 0, 1023, 0, 180); 
  servo.write(radian);
  delay(1000);
}
