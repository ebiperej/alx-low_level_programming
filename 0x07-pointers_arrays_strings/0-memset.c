#include "main.h"
/**
<<<<<<< HEAD
  *
  *
  *
  */
char *_memset(char *s, char b, unsigned int n)
{



=======
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
		s[index] = b;
		index++;
	}
	return (s);
>>>>>>> 28bae78a1648e557590960566f9da1f0d88ae924
}
