

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
