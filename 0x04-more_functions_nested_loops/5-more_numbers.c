#include "main.h"
/**
  * more_numbers - prints the numbers, from 0 to 14, 10 times
  * Return: 0 (success)
  */
void more_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
	int j = 0;

	while (j <= 14)
	{
		if (j > 9)
			_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		j++;
	}
	_putchar('\n');
}
}
