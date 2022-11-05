#include "main.h"
/**
  * print_square - prints a square of #, followed by a new line
  * Return: 0 (success)
  * @size:size of the square
  */
void print_square(int size)
{
	int vert, hon;

	if (size > 0)
	{
		for (vert = 0; vert < size; vert++)
		{
			for (hon = 0; hon < size; hon++)
				_putchar('#');
			if (vert == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
