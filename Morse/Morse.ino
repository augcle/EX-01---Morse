#include"TFT_eSPI.h" //include TFT LCD library 
TFT_eSPI tft; //initialize TFT LCD 
#define ltime 1000
#define stime 500

void setup() {
  tft.begin(); //start TFT LCD
  tft.setRotation(3); //set screen rotation
}

void screenOn(int time) {
  tft.fillScreen(TFT_WHITE); //fill background
  delay(time);
}

void screenOff(int time) {
  tft.fillScreen(TFT_BLACK); //fill background
  delay(time);
}

void printS() {
  screenOn(stime);
  screenOff(stime/2);
  screenOn(stime);
  screenOff(stime/2);
  screenOn(stime);
}

void printO() {
  screenOn(ltime);
  screenOff(stime/2);
  screenOn(ltime);
  screenOff(stime/2);
  screenOn(ltime);
}

void loop() {
  delay(ltime);

  printS();
    screenOff(ltime);
  printO();
    screenOff(ltime);
  printS();
    screenOff(ltime);
}
