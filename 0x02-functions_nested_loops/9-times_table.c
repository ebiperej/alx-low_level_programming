#include "main.h"
/**
 * times_table - prints 9 times table
 *Return: 0(Success)
 */
void times_table(void)
{
int i;
int j;
int pr;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
pr = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (pr >= 10)
{
_putchar((pr / 10) + '0');
_putchar((pr % 10) + '0');
}
else if (pr < 10 && j != 0)
{
_putchar(' ');
_putchar((pr % 10) + '0');
}
else
_putchar((pr % 10) + '0');
}
_putchar('\n');
}
}

