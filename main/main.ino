
#include "library.h"



void setup() {
  // Communication frequency
  Serial.begin(9600);

  // Initializing pins
  pinMode(RedLED, OUTPUT);
  pinMode(YellowLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(rotateLeft, INPUT_PULLUP);
  pinMode(rotateRight, INPUT_PULLUP);
  pinMode(FireButton, INPUT_PULLUP);
  
  pinMode(Photocell, INPUT);


  // Setting initial config
  digitalWrite(GreenLED, HIGH);
  
}


void loop() {

  /*
  setPinOff(RedLED);
  if(digitalRead(rotateLeft) == LOW) {
    while(digitalRead(rotateLeft) == LOW) {
      rotateCounterClockwise();  
    }
  }
  else if(digitalRead(rotateRight) == LOW) {
    while(digitalRead(rotateRight) == LOW) {
      rotateClockwise();  
    }
  }
  else if(digitalRead(FireButton) == LOW) {
    fire();
    if(shotsMissed == 3){
      gameOver();
    }
  }
  else {
    return;
  }
  
  // Reset LED indicatiors and servo state
  setPinOff(GreenLED);
  setPinOn(RedLED);
  
  resetServo();
  setPinOn(GreenLED);
  */
  gameOver();
}

void gameOver() {
  shotsMissed = 0;
  score = 0;
  alreadyScored = 0;
  for(int i = 0; i < 3; i++) {
    digitalWrite(YellowLED, HIGH);
    digitalWrite(GreenLED, HIGH);
    digitalWrite(RedLED, HIGH);
    
    delay(250);
    
    digitalWrite(YellowLED, LOW);
    digitalWrite(GreenLED, LOW);
    digitalWrite(RedLED, LOW);
  }
  delay(1000);
}



  
