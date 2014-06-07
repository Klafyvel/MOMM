#include "Stepper.h"


#define PAS_1 2
#define PAS_2 3
#define PAS_3 4
#define PAS_4 5
#define PAS_5 6

//Stepper moteur(200, PAS_1, PAS_2, PAS_3, PAS_4);

void setup()
{
	DDRB = B00001111; // 8 (poids faible) vers 13 (poids fort)
	PORTB = B00000000;
}
void loop()
{
	// En mode 1/2 pas
	for(int i=0; i<8; i++)
	{
		switch(i)
		{
			case 0:
				PORTB = B00001000;
				break;
			case 1:
				PORTB = B00001010;
				break;
			case 2:
				PORTB = B00000010;
				break;
			case 3:
				PORTB = B00000110;
				break;
			case 4:
				PORTB = B00000100;
				break;
			case 5:
				PORTB = B00000101;
				break;
			case 6:
				PORTB = B00000001;
				break;
			case 7:
				PORTB = B00001001;
			default:
				break;
		}
		delay(5);
	}
}