# Capacitive Touch Sensing

### With the Arduino [CapSense](https://playground.arduino.cc/Main/CapacitiveSensor/) library


## Circuit

Digital Pin Send &mdash; High value resistor &mdash; Digital Pin Receive &mdash; Contact material 

| item | details |
| --- | --- |
| Digital Pin Send | Any digital pin. Multiple capacitive sensors can share one pin (e.g. D3) |
| High value resistor | more than or equal to 1MOhm |
| Digital Pin Receive | Any digital pin. Has to be a unique pins for each capacitive sensor |
| Contact Material | Any conductive material that extends the receive pin to the point/region for contact/sensing |

## Install Arduino Library

Open the Arduino IDE.

Go to _sketch_ > _include library_ > _manage libraries_

Search for "capacitivesensor". Click and install the _CapacitiveSensor_ library by Paul Bagder, Paul Stoffregen.

Restart the Arduino IDE.

## Exercise

Open and upload [capactive_touch](capacitive_touch) to the Arduino. This sketch reads a capacitive sensor with the send pin at pin 5 and the receive pin at pin 6. Connect a 1MOhm resistor between those two pins.

Reset the Arduino.

Open the serial monitor or plotter to look at the readings. Touch the leg of the resistor at the receive pin (6). How do the readings change?

Try extending the touch point by connecting the receive pin to a conductive material. Always reset the Arduino when you change the capacitive touch set up, as the capacitive sensing library runs a calibration routine at the beginning the establish the sensing baseline.

Try connecting more capacitive sensors to one Arduino!

Things to consider:
- What materials can you use to extend the capacitive sensing point.
- What materials can you use to insulate the sensor?
- What materials can the sensor "sense through"?