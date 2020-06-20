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
  matrix.printText(0, 0, " ");
}
void loop() {
  Serial.print(String("  AnalogRead A0 = "));
  Serial.println((KB1.Readadc(A0)));
  Serial.print(String("  AnalogRead A1 = "));
  Serial.println((KB1.Readadc(A1)));
  Serial.print(String("  AnalogRead A2 = "));
  Serial.println((KB1.Readadc(A2)));
  Serial.print(String("  AnalogRead A3 = "));
  Serial.println((KB1.Readadc(A3)));
  Serial.print(String("  AnalogRead A4 = "));
  Serial.println((KB1.Readadc(A4)));
  Serial.print(String("  AnalogRead A5 = "));
  Serial.println((KB1.Readadc(A5)));
  Serial.print(String("  AnalogRead A6 = "));
  Serial.println((KB1.Readadc(A6)));
  Serial.print(String("  AnalogRead A7= "));
  Serial.println((KB1.Readadc(A7)));
  Serial.print(String("  AnalogRead A8 = "));
  Serial.println((KB1.Readadc(A8)));
  Serial.print(String("  AnalogRead A9 = "));
  Serial.println((KB1.Readadc(A9)));
  delay(100);
}