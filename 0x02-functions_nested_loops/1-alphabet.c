#include "main.h"
<<<<<<< HEAD
void print_alphabet(void);
=======
>>>>>>> 27598c097008ac5d27273c401fcdc568958858df
/**
 * main - entry point
 * Description: Prints _putchar with _putchar
 * Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
}
