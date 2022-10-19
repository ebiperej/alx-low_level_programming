#include "main.h"
int _islower(int c);
/**
 * _islower - Checks alphabets if it is lowercase
 * @c: If lowercase alphabet
 * Return: Always 0 (Success)
*/
int _islower(int c)
{
for (c = 0; c <= 126; c++)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
return (0);
}
}
