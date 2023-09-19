#include "main.h"

/**
 * swap_int - swaps values of two int
 * @a: the 1st int
 * @b: the 2nd int
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a  = *b;
	*b = m;
}
