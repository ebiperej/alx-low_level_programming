 #include "main.h"
/**
  * _strcmp -  function that compares two strings.
  * @s1: first string to be compared
  * @s2: second string to be compared with.
  * Return: 0, less than 0 or greater than zero
  */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++)
		j = 0;
	while (*(s2 + j) != '\0')
		j++;
	if (*(s1 + i) == *(s2 + j))
	{
		return (0);
	}
	else if (*(s1 + i) < *(s2 + j))
	{
	return (-15);
	}
	else
	{
	return (15);
	}
}
