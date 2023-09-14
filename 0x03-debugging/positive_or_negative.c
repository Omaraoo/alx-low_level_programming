#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include "main.h"

/**
 * positive_or_negative - check if the int is positive or negative
 * @i: the int to be randomize
 * Return: Always 0 (success)
*/

void positive_or_negative(int i)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
if (i > 0)
	printf("%u is positive\n", i);
if (i == 0)
	printf("%u is zero\n", i);
if (i < 0)
	printf("%d is negative\n", i % 100);
}
