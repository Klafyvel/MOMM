#include "myStepper.h"

Stepper s = Stepper(345);

char o = 0;

void setup()
{
	s.set_speed(60);
	DDRB = B00101111;
	PORTB = B00000000;
}

void loop()
{
	for(int i=0; i<345; i++)
	{
		s.move(RIGHT);

		if(o != s.get_current_output())
		{
			o = s.get_current_output();
		}
		PORTB = B00001111 & o;
		delay(17);
	}
	digitalWrite(13, HIGH);
	delay(1000);

	for(int i=345; i>=0; i--)
	{
		s.move(LEFT);

		if(o != s.get_current_output())
		{
			o = s.get_current_output();
		}
		PORTB = B00001111 & o;
		delay(17);
	}
digitalWrite(13, HIGH);
	delay(1000);
}