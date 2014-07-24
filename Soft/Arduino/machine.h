#ifndef H_MACHINE
#define H_MACHINE

#include "axis.h"
#include <Arduino.h>
#include <cmath.h>

typedef struct {
    float x;
    float y;
    float z;
} mvment;
mvment create_empty_mv();
bool mvment_is_eq(mvment *a, mvment *b);

class Machine
{
public:
	Machine();
    void move(mvment mv);
    void set_speed_mm_per_s(int speed);
	
private:
    int delay;
	Axis axis[3];
};

#endif
