#include "main.h"
/**
  * more_numbers - prints the numbers, from 0 to 14, 10 times
  * Return: 0 (success)
  */
void more_numbers(void)
{
int i, j = 0;
while (i <= 10)
{
	while (j <= 14)
	{
		_putchar(j);
		j++;
		_putchar('\n');
	}
	i++;
}
_putchar('\n');
}
