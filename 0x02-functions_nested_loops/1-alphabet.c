#include "main.h"
void print_alphabet(void);
/**
 * main - entry point
 * Description: Prints _putchar with _putchar
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
