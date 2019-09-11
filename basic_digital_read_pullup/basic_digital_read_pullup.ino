int PIN = 5;

void setup() {
  // use the built in pull up resistor for digital pins.
  // connect switch/button to digital pin and ground.
  // when switch/button is open, pin value is HIGH/1.
  // when switch/button is closed, pin value is LOW/0.
  pinMode(PIN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(PIN);
  Serial.println(val);
  delay(10); // small delay to not overload serial buffer.
}
