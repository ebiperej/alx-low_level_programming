#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int n = 48;
char c = 'a';
while  (n < 58)
{
putchar(n);
n++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
