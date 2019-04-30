/* Global Variables */


int highScore = 0;
int score = 0;
//int shotsMissed = 0;


/* Functions */

void setPinOn(byte pin) {
  digitalWrite(pin, HIGH);
}



void setPinOff(byte pin) {
  digitalWrite(pin, LOW);
}

void buzz(int duration) {
  for (int i = 0; i < duration; i++) { // generate a 1KHz tone for 1/2 second
    digitalWrite(Buzzer, HIGH);
    delayMicroseconds(2000);
    digitalWrite(Buzzer, LOW);
    delayMicroseconds(2000);
  }
}

void newHighScore() {
  
  
}
