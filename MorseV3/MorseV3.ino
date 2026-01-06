

const uint8_t ledPin = 13;   
const uint16_t timeShort = 300;       
const uint16_t timeLong  = 900;       


void shortBlink() {                  
  digitalWrite(ledPin, HIGH);
  delay(timeShort);
  digitalWrite(ledPin, LOW);
  delay(timeShort);                  
}

void longBlink() {                   
  digitalWrite(ledPin, HIGH);
  delay(timeLong);
  digitalWrite(ledPin, LOW);
  delay(timeShort);                  
}

void letterGap() {
  delay(2 * timeShort);
}

void wordGap() {
  delay(6 * timeShort);
}

void printA() { 
  shortBlink();
  longBlink();
  letterGap();
}

void printU() { 
  for (uint8_t i = 0; i < 2; i++) {
    shortBlink();
  }
  longBlink();
  letterGap();
}

void printG() { 
  for (uint8_t i = 0; i < 2; i++) {
    longBlink();
  }
  shortBlink();
  letterGap();
}

void printS() { 
  for (uint8_t i = 0; i < 3; i++) {
    shortBlink();
  }
  letterGap();
}

void printT() { 
  longBlink();
  letterGap();
}

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  for (uint8_t i = 0; i < 6; i++) {
    if      (i == 0) printA();
    else if (i == 1) printU();
    else if (i == 2) printG();
    else if (i == 3) printU();
    else if (i == 4) printS();
    else if (i == 5) printT();
  }

  wordGap(); // pause before repeating the whole name
}
