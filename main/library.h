/* Global Variables */

const byte RedLED = 2;
const byte YellowLED = 3;
const byte GreenLED = 4;
const byte Buzzer = 5;

const byte rotateLeft = 11;
const byte rotateRight = 12;
const byte FireButton = 13;

const byte Photocell = A0;

byte input_FireButton = 1;   // Default pullup value
int input_Photocell = 0;    




int highScore = 0;
int score = 0;
int shotsMissed = 0;
int alreadyScored = 0;



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
