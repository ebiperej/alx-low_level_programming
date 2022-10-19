#include "main.h"
void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - Prints alphabets in lowercase times 10
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i = 0;
for (i = 1; i <= 10; i++)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
