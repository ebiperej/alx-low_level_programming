#include "main.h"
void print_alphabet(void);
/**
 * print_alphabet - Prints alphabets in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);

		c++;
	}
	_putchar('\n');
}
