#include "main.h"
/**
  * print_rev - prints a string in reverse folloewd by a new line
  * @s: pointer to a sting
*/
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
	i++;
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
