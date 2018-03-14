void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(8, OUTPUT);
pinMode(5, OUTPUT);
}

  void loop() {
digitalWrite(13, HIGH); 
delay(750);
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
delay(750);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
delay(750);
digitalWrite(11, LOW);
digitalWrite(8, HIGH);
delay(750);
digitalWrite(8, LOW);
digitalWrite(5, HIGH);
delay(750);
digitalWrite(5, LOW);
 }
