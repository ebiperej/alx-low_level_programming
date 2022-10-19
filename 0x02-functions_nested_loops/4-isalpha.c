#include "main.h"
/**
 * _isalpha - Checks if alphabetic, upper or lower case
 * @c: If lowercase alphabet
 * Return: 1 if alphabet and 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 9 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
