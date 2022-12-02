#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string to convert
 *
 * Return: Number, or 0 if b is nan
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, flag;

	if (b == NULL)
		return (0);
	for (num = 0, flag = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (!flag && b[i] == '1')
			flag = 1;
		if (flag && b[i] == '1')
			num = num << 1, num += 1;
		else if (flag && b[i] == '0')
			num = num << 1;
	}
	return (num);
}
