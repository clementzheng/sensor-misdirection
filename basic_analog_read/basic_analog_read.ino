int PIN = A0;
float val = 0;
float inputVal = 0;

void setup() {
  analogReadResolution(12); // Set analog resolution to 12 bits (default is 10 bits)
  Serial.begin(9600); // Begin serial communication over USB at 9600 baud rate
}

void loop() {
  inputVal = analogRead(PIN); // Read analog value at PIN (0 - 4095)
  val = (inputVal + val)/2; // Smoothing function: look up "exponential moving average"
  Serial.println(val); // Print val through serial port
  delay(20); // 20ms delay so we are not overloading the serial buffer
}
