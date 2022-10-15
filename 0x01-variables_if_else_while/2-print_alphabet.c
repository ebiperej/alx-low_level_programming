#include <stdio.h>
/**
*main - Prints alphabets in lower case
*Return: value is always 0 (Success)
*/
int main(void)
{
char ch[26] = "abcdefghijklmnopqrstuvwxyz";
int c;
for (c = 0; c < 26; c++)
{
putchar(ch[c]);
}
putchar('\n');
return (0);
}
