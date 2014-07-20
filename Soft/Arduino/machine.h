#ifndef H_MACHINE
#define H_MACHINE

#include "axis.h"
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
    void set_speed(int speed);
	
private:
    int speed;
	Axis axis[3];
};

#endif
