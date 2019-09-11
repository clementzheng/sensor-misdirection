int PIN = 5;

void setup() {
  pinMode(PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(PIN);
  Serial.println(val);
  delay(10); // small delay to not overload serial buffer.
}
