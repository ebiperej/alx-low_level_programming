#include "main.h"
/**
  * print_square - prints a square of #, followed by a new line
  * Return: 0 (success)
  * @size:size of the square
  */
void print_square(int size)
{
	if (size > 0)
	{
		int hon, vert;
		for (hon = 0; hon < size; hon++)
		{
			vert = 0;
			while (vert < size)
			{
				_putchar('#');
				vert++;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
