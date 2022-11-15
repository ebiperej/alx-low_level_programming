#include "main.h"
/**
* _abs - absolute value of a number
* @n: number to be returned
* Return: the absolute value of the inputed number
*/
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
