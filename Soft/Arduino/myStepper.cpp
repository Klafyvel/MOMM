#include "myStepper.h"

Stepper::Stepper(unsigned char nb_step)
{
	this->current_step = 0;
	this->step = 2;
	this->step_delay = 0;
	this->timer = 0;
	this->nb_step = nb_step;
}

char Stepper::get_current_output()
{
	return pgm_read_byte(&OUTPUT_VALUES[this->current_step]);
}

char Stepper::move(char direction)
{

	/*if((long)abs(millis() - this->timer) >= (long)abs(this->step_delay))
	{
		this->timer = millis();*/
		this->current_step += this->step * direction;
		if(current_step >= 8)
			this->current_step = 0;
		else if(current_step < 0)
			this->current_step = 7;
	//}
	return this->timer;
}

void Stepper::set_moving_mode(char mode)
{
	if(mode == HALF_STEP)
		this->step = 1;
	else if(mode == NORM_STEP)
		this->step = 2;
}

long Stepper::set_speed(unsigned char rpm)
{
	this->step_delay = 60L * 1000L / this->nb_step / rpm; // in millisecond
	return this->step_delay;
}