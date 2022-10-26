int led1 = 5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = analogRead(A0);
  Serial.println(a/4);
  analogWrite(led1, a/4); //a/4를 하는 이유 
}
