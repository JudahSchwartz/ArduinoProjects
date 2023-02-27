

#include <Servo.h>

Servo myservo;  
int angle = 10;
int delta = 1;

void setup() {
  Serial.begin(9600);
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object+
  Serial.println();
  Serial.println("Start");
}

void loop() {

  angle += delta;

  if (angle > 179 || angle < 1){
    delta = delta * -1;
  }
  myservo.write(angle);
  delay(15);
}
