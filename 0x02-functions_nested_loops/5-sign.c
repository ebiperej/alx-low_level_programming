#include "main.h"
/**
 * print_sign - function that prints sign of a number
 * @n: if number is not zero
 *Return: if number is zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
