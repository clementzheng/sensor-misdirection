/****************************************
Example Sound Level Sketch for the 
Adafruit Microphone Amplifier
****************************************/
 
int sampleWindow = 50; // Sample window width in mS (50 mS = 20Hz)
int sample;
 
void setup() {
   Serial.begin(115200);
}
 
 
void loop() 
{
   unsigned long startMillis = millis();  // Start of sample window
   int peakToPeak = 0;   // peak-to-peak level
 
   int signalMax = 0;
   int signalMin = 1024;
 
   // collect data for 50 mS
   while (millis() - startMillis < sampleWindow){
    
      sample = analogRead(A0); // read mic connected to A0
      
      if (sample < 1024) { // ignore spurious readings since max is 1023
         if (sample > signalMax) {
            signalMax = sample;  // save just the max levels
         } else if (sample < signalMin) {
            signalMin = sample;  // save just the min levels
         }
      }
   }
   
   peakToPeak = signalMax - signalMin;  // max - min = peak-peak amplitude
   double volts = (peakToPeak * 1000) / 1024;  // convert to millivolts
 
   Serial.println(volts);
}
