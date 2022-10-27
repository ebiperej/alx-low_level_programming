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

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
