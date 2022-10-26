#include "main.h"
#include "_putchar.c"
/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 */
void puts2(char *str)
{
	int i = 0;

	while (i != '\0')
	{
	_putchar(*(str + i));
	i += 2;
	}
	_putchar('\n');
}
