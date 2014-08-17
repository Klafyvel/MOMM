#ifndef H_STEPPER
#define H_STEPPER

#include <avr/pgmspace.h>
#include <Arduino.h>
#include <math.h>

#define HALF_STEP 0
#define NORM_STEP 1

#define RIGHT 1
#define LEFT -1

PROGMEM const char OUTPUT_VALUES[] = {
	0x8,
	0xA,
	0x2,
	0x6,
	0x4,
	0x5,
	0x1,
	0x9
};

class Stepper
{
public:
	Stepper(unsigned char nb_step);
	char get_current_output();
	char move(char direction);
	void set_moving_mode(char mode);
	long set_speed(unsigned char rpm);
	void turn(char nb_step);
private:
	char nb_step;
	char step;
	char current_step;
	long step_delay;
	long timer;
};

#endif