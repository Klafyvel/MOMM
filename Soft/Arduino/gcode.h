#ifndef H_GCODE
#define H_GCODE

//M-codes
#define M02 0 // end prgm
#define M03 1 // clockwise directions
#define M05 2 // stop the spindle rotation

//G-codes
#define G00 3 // linear movement, fast
#define G01 4 // linear movement, milling
#define G04 5 // delay
#define G21 6 // metric mode
#define G82 7 // drill
#define G90 8 // absolute coordinate

typedef void (*callback_parser)(Machine machine);

callback_parser instructions[];

struct parser_state
{

	int moving_mode;
	// to be continue 
};


#endif
