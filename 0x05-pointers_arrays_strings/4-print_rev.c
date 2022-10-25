#include "main.h"
/**
  * print_rev - prints a string in reverse folloewd by a new line
  * @s: pointer to a sting
*/
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
	_putchar(s[i--]);									}
	_putchar('\n');
}
