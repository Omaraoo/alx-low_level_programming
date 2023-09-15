#include "main.h"

/**
 * _isupper - check if the char is upper case
 * @c: the char to be checked
 * Return: 0 or 1
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
else
return (0);
}
