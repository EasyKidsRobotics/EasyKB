#include <Arduino.h>
#include <vector>
#include <WiFi.h>
#include <Wire.h>
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"

#include <Wire.h>
#include <EasyKB.h>

#include "KB_initBoard.h"
#include "KB_music.h"
#include "KB_LDR.h"
#include "KB_LM73.h"
#include "KB_ht16k33.h"
#include "MCP7941x.h"

MCP7941x rtc = MCP7941x();

KB_board board = KB_board();
KB_music music = KB_music();
KB_LDR ldr = KB_LDR();
KB_LM73 lm73 = KB_LM73();
KB_8x16Matrix matrix = KB_8x16Matrix();

typedef int Number;
typedef int Boolean;
using namespace std;

void setServo(int degrees);
int degrees;
int i;
EasyKB KB1;

void setServo(int degrees) {
  KB1.ServowriteM(Servo1, degrees);
  KB1.ServowriteM(Servo2, degrees);
  KB1.ServowriteM(Servo3, degrees);
  Serial.println(degrees);
  delay(20);

  return;
}

void setup() {
  board.begin();
  music.begin();
  lm73.begin();
  matrix.displayBegin();
  ldr.begin();

  Serial.begin(115200);

  KB1.begin(0x42);
}
void loop() {
  /**
   * Describe this function...
   */
  for (i = 0; i <= 180; i++) {
    setServo(i);
  }
  for (i = 180; i >= 0; i--) {
    setServo(i);
  }
}