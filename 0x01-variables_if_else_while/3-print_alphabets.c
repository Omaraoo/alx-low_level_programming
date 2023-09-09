#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: the alphabet game using ASCII
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char ch = 'a';
char chz = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (chz <= 'Z')
{
putchar(chz);
chz++;
}
putchar('\n');
return (0);
}
