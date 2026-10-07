const int arduinoBoardLED = 13; // LED on pin 13


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);               // Use Serial Monitor to debug
  pinMode(arduinoBoardLED, OUTPUT); // initialize the digital pin as an output.
  Serial.println("Running The Seup Function");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x=0; x<21; x++)
  {
    if (x==10){
      Serial.println("X is equal to 10");
      delay(100);
    }
    else if (x<10){
      Serial.println ("X is less than 10");
      delay(100);
    }
    else{
      Serial.println ("X is more than 10");
      delay(100);
    }
    Serial.print("X is ");
    Serial.println(x);
  }
  delay (500);
}
