#include <Servo.h>

Servo myservo;
int pos = 1500;
int st=10;
int min_rot=550;
int max_rot=2400;
int clockwise=7;
int counter_c=9;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(11);
  myservo.writeMicroseconds(1500);
  pinMode(counter_c, INPUT);
  pinMode(clockwise, INPUT);
  
}

void loop() {
  while(digitalRead(counter_c)==HIGH){
    pos=pos+st;
    myservo.writeMicroseconds(pos);
    delay(15);
  }

  while(digitalRead(clockwise)==HIGH){
    pos=pos-st;
    myservo.writeMicroseconds(pos);
    delay(15);
  }

  /*
  // put your main code here, to run repeatedly:
  for (pos = 1500; pos <= max_rot; pos += st) {
    myservo.writeMicroseconds(pos);
    delay(15);
  }
  for (pos = max_rot; pos >= min_rot; pos -= st) {
    myservo.writeMicroseconds(pos);
    delay(15);
  }

  for (pos=min_rot;pos<=1500;pos+=st){
    myservo.writeMicroseconds(pos);
    delay(15);
  }
  */
}

void rotateClockwise() {
  Serial.println("Servo rotated clockwise");
  delay(50);
  
}

void rotateCounterClockwise() {
  Serial.println("Servo rotated counter-clockwise");
  delay(50);
  
}

void resetServo() {
  long seed = random(2, 20);  // must be changed to fit parameters of moving servo
  Serial.println("Resetting servo");
  delay(1000);
  
  
}
