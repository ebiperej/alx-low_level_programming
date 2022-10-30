#include "main.h"
/**
 * string_toupper - converts string to upper case
 * Return: Always 0.
 * @c: string to be converted
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (*(c + i) != '\0')
	{
	if (*(c + i) >= 'a' && *(c + i) <= 'z')
	*(c + i) -= 'a' - 'A';
	i++;
	}
return (c);
}
