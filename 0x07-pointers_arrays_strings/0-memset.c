#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area s
 * @n: the number of bytes to fill
 * @b: constant byte
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		s[i] = b;
		index++;
	}
	return (s);
}
