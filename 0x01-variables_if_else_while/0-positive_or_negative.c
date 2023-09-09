#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Description: false or true validation
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%u is positive\n", n);
if (n == 0)
	printf("%u is zero\n", n);
if (n < 0)
	printf("%u is negative\n", n % 100);
return (0);
}
