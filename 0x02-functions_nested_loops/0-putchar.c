#include "main.h"
/**
 * main - entry point
 * Description: Prints _putchar with _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
char w[] = "_putchar";
int j = 0;
while (j <= 8)
{
char c = w[j];
_putchar(c);
j++;
}
_putchar('\n');
return (0);
}
