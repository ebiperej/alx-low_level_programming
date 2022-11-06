#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line
 * @str: string to be cheched
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0, length_of_the_string = 0, n;

	while (str[index++])
		length_of_the_string++;
	if ((length_of_the_string % 2) == 0)
		n = length_of_the_string / 2;
	else
		n = (length_of_the_string - 1) / 2;
	for (index = n; index < length_of_the_string; index++)
		_putchar(str[index]);
	_putchar('\n');
}
