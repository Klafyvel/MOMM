Axis::Axis(char nb_step_motor, char screw_thread)
{
	this->step = Stepper(nb_step_motor);
	this->step.set_moving_mode(HALF_STEP);
	this->speed = 0;
	this->screw_thread = screw_thread;
	this->minimum_displacement = screw_thread / nb_step_motor / 2;
}

void Axis::set_speed(char speed)
{
	this->speed = speed
}

void Axis::forward(char mm)
{
	float done = 0;
}