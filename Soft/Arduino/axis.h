#ifndef H_AXIS
#define H_AXIS

#include <Arduino.h>
#include "myStepper.h"

class Axis
{
public:
	Axis();
	void forward();
	void backward();
private:
	Stepper motor;
	char screw_thread;
	float minimum_displacement;
};

#endif
