#define ltime 300
#define stime 100
#define LEDPIN 13

void setup() {
  pinMode (13, OUTPUT);
}

void printS() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LEDPIN, HIGH);
      delay(stime/2);
    digitalWrite(LEDPIN, LOW);
      delay(stime/2);}
}

void printO() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LEDPIN, HIGH);
      delay(ltime);
    digitalWrite(LEDPIN, LOW);
      delay(ltime);}
}

void loop() {
  printS();
  delay(ltime);
  printO();
  delay(ltime);
  printS();
  delay(ltime*4);
}
