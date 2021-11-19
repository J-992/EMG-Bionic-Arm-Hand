/* Testing for all 5 servos before they are used in the EMG arm
*/

#include <Servo.h>

// create servo object to control a servo
                // twelve servo objects can be created on most boards        
Servo servo3; 
Servo servo5;
Servo servo6;               
Servo servo9;               
Servo servo10;               

int pos = 0;    // variable to store the servo position

void setup() {
  // attaches the servo on pin ## to the servo object
  servo3.attach(3);
  servo5.attach(5);  
  servo6.attach(6);
  servo9.attach(9);
  servo10.attach(10);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    // tell servo to go to position in variable 'pos'
    servo3.write(pos);
    servo5.write(pos);             
    servo6.write(pos);
    servo9.write(pos);
    servo10.write(pos);
    // waits 15 ms for the servo to reach the position
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo3.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    servo9.write(pos);
    servo10.write(pos);
    delay(15);                       // waits 15 ms for the servo to reach the position
  }

  //exits so that the code doesnt repeat constantly
  exit(0);
}
