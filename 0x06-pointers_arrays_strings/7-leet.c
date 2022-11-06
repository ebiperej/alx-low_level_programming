#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0;

	char leet[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};

	while (str[i])
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
