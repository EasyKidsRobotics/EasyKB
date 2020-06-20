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

  Serial.begin(115200);
  KB1.setuppin(D1, DImode);
  KB1.setuppin(D2, DImode);
  KB1.setuppin(D3, DImode);
  KB1.setuppin(D4, DImode);
  KB1.setuppin(D5, DImode);
  KB1.setuppin(D6, DImode);
  matrix.printText(0, 0, " ");
}
void loop() {
  Serial.print(String(" DigitalRead D1 = "));
  Serial.println((KB1.ReadIO(D1)));
  Serial.print(String(" DigitalRead D2 = "));
  Serial.println((KB1.ReadIO(D2)));
  Serial.print(String(" DigitalRead D3 = "));
  Serial.println((KB1.ReadIO(D3)));
  Serial.print(String(" DigitalRead D4 = "));
  Serial.println((KB1.ReadIO(D4)));
  Serial.print(String(" DigitalRead D5 = "));
  Serial.println((KB1.ReadIO(D5)));
  Serial.print(String(" DigitalRead D6 = "));
  Serial.println((KB1.ReadIO(D6)));
  delay(100);
}