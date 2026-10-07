// ============================================================================
const int arduinoBoardLED = 13; // LED on pin 13
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);               // Use Serial Monitor to debug
  pinMode(arduinoBoardLED, OUTPUT); // initialize the digital pin as an output.
  Serial.println("Running The Seup Function");
}

void loop() {
  // put your main code here, to run repeatedly
    for(int x=0; x<21; x++)
 {
      Serial.println(x);
      delay(100);
 }
 count++;
 Serial.print("Loop");
 Serial.println(count);
 delay(500);
 }

