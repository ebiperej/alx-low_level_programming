#include "main.h"
/**
* rev_string - prints a strin in reverse
* @s: string to reverse
* Return: void
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
