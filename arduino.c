// Setup:
// Goes trough all of the digital pins from 0 to 9 and initializes them as an output.
void setup() {
  for(int a=0; a<=9; a++){
    pinMode(a, OUTPUT);
  }
}

// Loop:
// Ligths the 0 led and then enter the for loop.
// In the for loop it ligth the next led and then shuts down the one before.
// When the the outputs number(variables a and b) gets over 9 it resets them to 0.
void loop() {
  int a, b;
  digitalWrite(0, HIGH);
  for (a=0, b=1; true; a++, b++){
    if (a>9){
    	a=0;
    }
    if (b>9){
      	b=0;
    }
  	digitalWrite(b, HIGH); // turn the LED on by making the voltage HIGH
  	delay(250); // wait
 	  digitalWrite(a, LOW); // turn the LED off by making the voltage LOW
  	delay(250); // wait
  }
}
