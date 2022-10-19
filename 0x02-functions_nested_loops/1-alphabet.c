#include "main.h"
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
return (0);
}
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
