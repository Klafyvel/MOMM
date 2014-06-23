#ifndef H_AXIS
#define H_AXIS

#include <Arduino.h>
#include "myStepper.h"

class Axis
{
public:
	Axis();
	void set_speed(char speed);
	void forward(char mm);
	void backward(char mm);
private:
	Stepper step;
	char speed; // mm/s
	char screw_thread;
	long timer;
	float minimum_displacement;
};

#endif