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
while  (n < 58)
{
putchar(n);
if (n !=  57)
{
putchar(44);
putchar(32);
n++;
}
else
{
n++;
}
}
putchar('\n');
return (0);
}
