#include "main.h"
/**
  * _strcat - concatenates two strings
  * Return: pointer to resulting string
  * @dest: pointer to destination string
  * @src: source string
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
