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

void printS() { 
  for (uint8_t i = 0; i < 3; i++) {
    shortBlink();
  }
}

void printO() { 
  for (uint8_t i = 0; i < 3; i++) {
    longBlink();
  }
}


void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  printS();
  printO();
  printS();

  wordGap();
}
