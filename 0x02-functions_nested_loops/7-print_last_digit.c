#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be returned
 * Return: the last digit of a given number
 */
int print_last_digit(int n)
{
if (n < 0)
{
n *= -1;
}
_putchar((n % 10) + '0');
return (n);
}
