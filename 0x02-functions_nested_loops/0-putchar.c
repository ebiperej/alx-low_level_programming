#include "main.h"
/**
 * main - entry point
 * Description: Prints _putchar with _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
char w[] = "_putchar\n";
int j = 0;
char c;
while (j <= 8)
{
c = w[j];
_putchar(c);
j++;
}
return (0);
}
