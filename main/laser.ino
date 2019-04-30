
//int shotsMissed = 0;

void fire() {
  pushSolenoid();
  


  if(analogRead(Photocell) > 985) {
      score += 1;
      hit();
      if(score > highScore) {
        highScore = score;
        if(alreadyScored == 0) {
          newHighScore();
        }
        alreadyScored = 1;
      }
  }
  else {
    shotsMissed += 1;  
  }

  
}


void hit() {
  setPinOn(YellowLED);
  buzz(500);  
  setPinOff(YellowLED);
}
