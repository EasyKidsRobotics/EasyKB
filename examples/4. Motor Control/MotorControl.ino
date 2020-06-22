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

EasyKB KB1;

void setup() {
  board.begin();
  music.begin();
  lm73.begin();
  matrix.displayBegin();
  ldr.begin();

  KB1.begin(0x42);

  KB1.setuppin(D1, DImode);
  KB1.setuppin(D2, DImode);
}
void loop() {
  if ((((int)digitalRead(KB_BUTTON1)) == 0) || ((KB1.ReadIO(D1)) == 0)) {
    KB1.Motor1(0, 50);
    KB1.Motor2(0, 50);
    delay(1000);
    KB1.Motor1(0, 0);
    KB1.Motor2(0, 0);
    delay(300);
    KB1.Motor1(1, 50);
    KB1.Motor2(1, 50);
    delay(1000);
    KB1.Motor1(0, 0);
    KB1.Motor2(0, 0);
    KB1.Motor3(0, 0);
    KB1.Motor4(0, 0);
  } else if ((((int)digitalRead(KB_BUTTON2)) == 0) || ((KB1.ReadIO(D2)) == 0)) {
    KB1.Motor3(0, 50);
    KB1.Motor4(0, 50);
    delay(1000);
    KB1.Motor3(0, 0);
    KB1.Motor4(0, 0);
    delay(300);
    KB1.Motor3(1, 50);
    KB1.Motor4(1, 50);
    delay(1000);
    KB1.Motor1(0, 0);
    KB1.Motor2(0, 0);
    KB1.Motor3(0, 0);
    KB1.Motor4(0, 0);
  }
}
