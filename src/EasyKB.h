#ifndef EasyKB_h
#define EasyKB_h
#include <Arduino.h>
#include <Wire.h>

#define DImode 0x02
#define DOmode 0x01

#define A0 0x10
#define A1 0x11
#define A2 0x12
#define A3 0x13
#define A4 0x14
#define A5 0x15
#define A6 0x16
#define A7 0x17
#define A8 0x18
#define A9 0x19

#define DIR1 0x40
#define DIR2 0x41
#define DIR3 0x42
#define DIR4 0x43

#define D1 0x50
#define D2 0x51
#define D3 0x52
#define D4 0x53
#define D5 0x54
#define D6 0x55

#define PWM1 0x20
#define PWM2 0x21
#define PWM3 0x22
#define PWM4 0x23

#define Servo1 0x30
#define Servo2 0x31
#define Servo3 0x32

class EasyKB {
    public:

    	uint8_t ADDS = 0x42;
		EasyKB();
		int begin(uint8_t add);
		uint16_t Readadc(uint8_t pin);  
		uint16_t ReadadcmV(uint8_t pin);      
		uint8_t ReadIO(uint8_t pin);
		void WriteIO(uint8_t pin, uint8_t output);
		void setuppin(uint8_t pin, uint8_t modes);
		void PWMwrite(uint8_t pin, uint16_t pwm);
		void ServowriteM(uint8_t pin, uint16_t M);

		void Motor1(uint8_t DIR, uint16_t PWM);
		void Motor2(uint8_t DIR, uint16_t PWM);
		void Motor3(uint8_t DIR, uint16_t PWM);
		void Motor4(uint8_t DIR, uint16_t PWM);
};



#endif
