#include <stdio.h>
/**
*main - entry point to program
*Return: Always return 0 (Success)
*/
int main(void)
{
char alp;
alp = 'a';
while (alp <= 'z')
{
putchar(alp);
alp++;
}
alp = 'A';
while (alp <= 'Z')
{
putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
