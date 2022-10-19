#include "main.h"
int _islower(int c);
/**
 * _islower - Checks alphabets if it is lowercase
 * @c: If lowercase alphabet
 * Return: 1 if lowercase and 0 if otherwise
*/
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
return (0);
}
