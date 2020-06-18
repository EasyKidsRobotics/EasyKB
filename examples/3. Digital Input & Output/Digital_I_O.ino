#include <Arduino.h>
#include <vector>
#include <WiFi.h>
#include <Wire.h>
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"

#include <Wire.h>
#include <EasyKB.h>
#include "KBEvent.h"

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
KBEvent kbevt;

void setup() {
  board.begin();
  music.begin();
  lm73.begin();
  matrix.displayBegin();
  ldr.begin();

  KB1.begin(0x42);

  KB1.setuppin(D1, DImode);
  KB1.setuppin(D2, DImode);
  KB1.setuppin(D3, DImode);
  KB1.setuppin(D4, DOmode);
  KB1.setuppin(D5, DOmode);
  KB1.setuppin(D6, DOmode);
  kbevt.attach("", KBEventType::TASK,
               []() {
                 KB1.WriteIO(D5, 1);
                 KB1.WriteIO(D6, 0);
                 delay(500);
                 KB1.WriteIO(D5, 0);
                 KB1.WriteIO(D6, 1);
                 delay(500);

                 vTaskDelete(NULL);
               },
               0);
}
void loop() {
  if ((((int)digitalRead(KB_BUTTON1))) || ((KB1.ReadIO(D1)) == 0)) {
    KB1.WriteIO(D3, 1);
  } else if ((((int)digitalRead(KB_BUTTON2))) || ((KB1.ReadIO(D2)) == 0)) {
    KB1.WriteIO(D4, 1);
  } else {
    KB1.WriteIO(D3, 0);
    KB1.WriteIO(D4, 0);
  }
}
