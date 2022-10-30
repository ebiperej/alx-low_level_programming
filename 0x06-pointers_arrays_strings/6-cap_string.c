#include "main.h"
/**
 * cap_string - capitalize every word in a string
* Return: converted string
* @str: string to be converted
*/
char *cap_string(char *str)
{
	int i, j;
/* s is the separartor */
	char s[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] -= ('a' - 'A');
	while (str[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		if (str[i - 1] == s[j] && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}
