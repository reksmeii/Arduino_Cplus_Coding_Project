#include <Servo.h> // Import Servo Library
Servo my_servo; 
int pos = 0; // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  my_servo.attach(9); // Servo on pin 9 to servo object 
  pos = 0; // Set position Variable
  my_servo.write(pos); // Set the default start position
  delay(1000); // Delay just a bit to get into position

  while(true){
    pos = 0;
    my_servo.write(pos); // Set the start position
    delay(1000);
    pos = 90;
    my_servo.write(pos); // Set the start position
    delay(1000);
    pos = 180;
    my_servo.write(pos); // Set the start position
    delay(1000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}