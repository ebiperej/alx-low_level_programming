#include "main.h"
/**
  * print_line - draws straight line in the terminal
  * Return: 0 (success)
  * @n:number of times the _ should be printed
  */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
			_putchar('_');
		i++;
	}
	_putchar('\n');
}
