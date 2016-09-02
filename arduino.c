// Setup:
// Goes trough all of the digital pins from 0 to 9 and initializes them as an output.
void setup() {
  for(int led=0; led<=9; led++){
    pinMode(led, OUTPUT);
  }
}

// Loop:
// In the for loop it ligth the next led and then shuts down previous one.
// When the the outputs number(variables previousLED and nextLED) gets over 9 it resets them to 0.
void loop() {
  int previousLED, nextLED;
  for (previousLED=-1, nextLED=0; true; previousLED++, nextLED++){
    if (previousLED>9){
    	previousLED=0;
    }
    if (nextLED>9){
      	nextLED=0;
    }
  	digitalWrite(nextLED, HIGH); // turn the LED on by making the voltage HIGH
  	delay(250); // wait
  	digitalWrite(previousLED, LOW); // turn the LED off by making the voltage LOW
  	delay(250); // wait
  }
}
