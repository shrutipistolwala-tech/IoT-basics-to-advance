int bP = 4;     // the number of the pushbutton pin
int lP =  13;      // the number of the LED pin

// variables will change:
int bS;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(lP, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(bP, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
 bS = digitalRead(bP);

  // check if the pushbutton is pressed. If it is, the bS is HIGH:
  if (bS == HIGH) {
    // turn LED on:
    digitalWrite(lP, HIGH);
    delay(1000);
  } else {
    // turn LED off:
    digitalWrite(lP, LOW);
  }
}
