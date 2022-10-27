#include "main.h"
/**
* _strncpy - copies a portion of a string and append to another
* @dest: string to append by src
* @src: string to append to dest
* @n: largest number of bytes to append
* Return: address of dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src[i] != '\0'; i++)
		*dest[i] = *src[i];
	for (i = 0; i < n; i++)
		*dest[i] = '\0';
	return (*dest);
}
