 #include "main.h"
/**
  * _strcmp -  function that compares two strings.
  * @s1: first string to be compared
  * @s2: second string to be compared with.
  * Return: 0, less than 0 or greater than zero
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i)
		!= '\0' && *(s1 + i) == *(s2 + i); i++)
	return (*(s1 + i) - *(s2 + i));
	}
}
