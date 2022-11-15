#include "main.h"
/**
  * _strlen - checks string length
  * Return: str length
  * @s: character pointer
*/
int _strlen(char *s)
{
int j = 0;
while (*s != '\0')
{
	j++;
	s++;
}
return (j);
}
