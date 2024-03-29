//    C program playing with a for loop with multiple expressions.

//    Do the standard initial C bits
#include <stdio.h>

int main (void)
{

//    Declare integer variables of: 
//    up, for counting up in the loop
//    down, for counting down in the loop,
//    jump, for incrementing by ten, 
//    mult, for multiplying up, down, and jump
	int	up, down, jump, mult;

//    For loop:
//    Initial: start everything at zero.
	for ( up = 0, down = 0, jump = 0, mult = 0 ;

//    Looping conditions: 
//    up being less than 10,
		up < 10, 
//    down being greater than 10,
		down > 10, 
//    jump being less than 100,
		jump < 100,
//    mult being greater than -5000,
 		mult > -5000 ;

//    Evaluation:  up increment by one, down decrement by one, 
//    jump increment by ten, mult increment by up * down * jump
	 ++up, --down, jump += 10, mult = (up * down * jump) )
	{
	
//    Print out up.
		printf ("up now equals %i. \n\n", up);
//    Print out down.
		printf ("down now equals %i. \n\n", down);
//    Print out jump.
		printf ("jump now equals %i. \n\n", jump);
//    Print out mult.
		printf ("mult now equals %i. \n\n", mult);

	}

//    There is nothing to return
	return 0;
}
