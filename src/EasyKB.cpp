#include <Arduino.h>
#include "EasyKB.h"
#include <math.h>

EasyKB::EasyKB() {}

int EasyKB::begin(uint8_t add)
{
  ADDS = add;
  Wire1.begin(4, 5);
  //	Wire1.setClock(400000);
  return 1;
}
uint16_t EasyKB::Readadc(uint8_t pin)
{
  Wire1.beginTransmission(ADDS);
  Wire1.write(0x10 | pin);
  Wire1.endTransmission();
  delay(1);
  Wire1.requestFrom(ADDS, 2);
  uint8_t h;
  uint8_t l;
  while (Wire1.available())
  {
    h = Wire1.read();
    l = Wire1.read();
  }
  uint16_t raw=word(h, l)*0.33f;
  if (raw > 1023)
  {
    raw = 1023;
  }
  return raw;
}

uint16_t EasyKB::ReadadcmV(uint8_t pin)
{
  Wire1.beginTransmission(ADDS);
  Wire1.write(0x10 | pin);
  Wire1.endTransmission();
  delay(1);
  Wire1.requestFrom(ADDS, 2);
  uint8_t h;
  uint8_t l;
  while (Wire1.available())
  {
    h = Wire1.read();
    l = Wire1.read();
  }
  return (float)word(h, l) * (660.0f / 4095.0f);
}

uint8_t EasyKB::ReadIO(uint8_t pin)
{
  uint8_t st;
  Wire1.beginTransmission(ADDS);
  Wire1.write(pin);
  Wire1.endTransmission();
  delay(1);
  Wire1.requestFrom(ADDS, 1);

  while (Wire1.available())
  {
    st = Wire1.read();
  }
  return st;
}
void EasyKB::WriteIO(uint8_t pin, uint8_t output)
{

  Wire1.beginTransmission(ADDS);
  Wire1.write(pin);
  Wire1.write(output);
  Wire1.endTransmission();
}
void EasyKB::setuppin(uint8_t pin, uint8_t modes)
{
  pin = pin << 4;
  pin = pin >> 4;
  Serial.println(pin, BIN);
  Wire1.beginTransmission(ADDS);
  Wire1.write(pin);
  Wire1.write(modes);
  Wire1.endTransmission();
}
void EasyKB::PWMwrite(uint8_t pin, uint16_t pwm)
{
  Wire1.beginTransmission(ADDS);
  Wire1.write(pin);
  Wire1.write(highByte(pwm));
  Wire1.write(lowByte(pwm));
  Wire1.endTransmission();
}
void EasyKB::ServowriteM(uint8_t pin, uint16_t M)
{
  if (M < 0)
  {
    M = 0;
  }
  if (M > 180)
  {
    M = 180;
  }
  M = (M * 10) + 544;
  Wire1.beginTransmission(ADDS);
  Wire1.write(pin);
  Wire1.write(highByte(M));
  Wire1.write(lowByte(M));
  Wire1.endTransmission();
}
void EasyKB::Motor1(uint8_t DIR, uint16_t PWM)
{
  if (PWM < 0)
  {
    PWM == 0;
  }
  if (PWM > 100)
  {
    PWM == 100;
  }
  PWM = PWM * 40;
  WriteIO(DIR1, DIR);
  PWMwrite(PWM1, PWM);
}
void EasyKB::Motor2(uint8_t DIR, uint16_t PWM)
{
  if (PWM < 0)
  {
    PWM == 0;
  }
  if (PWM > 100)
  {
    PWM == 100;
  }
  PWM = PWM * 40;
  WriteIO(DIR2, DIR);
  PWMwrite(PWM2, PWM);
}
void EasyKB::Motor3(uint8_t DIR, uint16_t PWM)
{
  if (PWM < 0)
  {
    PWM == 0;
  }
  if (PWM > 100)
  {
    PWM == 100;
  }
  PWM = PWM * 40;
  WriteIO(DIR3, DIR);
  PWMwrite(PWM3, PWM);
}
void EasyKB::Motor4(uint8_t DIR, uint16_t PWM)
{
  if (PWM < 0)
  {
    PWM == 0;
  }
  if (PWM > 100)
  {
    PWM == 100;
  }
  PWM = PWM * 40;
  WriteIO(DIR4, DIR);
  PWMwrite(PWM4, PWM);
}
