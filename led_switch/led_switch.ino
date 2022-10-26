int led = 8;
int sw = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(digitalRead(sw));
  if (digitalRead(sw)) {
    // code
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}
