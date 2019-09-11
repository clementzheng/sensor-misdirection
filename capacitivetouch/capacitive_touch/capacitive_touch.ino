#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */


// 1MOhm resistor between pins 5 & 6, pin 6 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_5_6 = CapacitiveSensor(5,6);


void setup() {
   Serial.begin(9600);
   cs_5_6.set_CS_Timeout_Millis(50); // set timeout for the sensor so it does not lock up the program when running
}

void loop() {
    long val1 =  cs_5_6.capacitiveSensor(30); // read the sensor
    Serial.println(val1);
    delay(10); // arbitrary delay to limit data to serial port 
}
