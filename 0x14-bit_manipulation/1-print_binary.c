#include "main.h"
#include <unistd.h>
/**
 * print_binary - print the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, longintsize, temp;
	int flag;
	char num;

	longintsize = sizeof(n) * 8 - 1;
	for (i = 0, flag = 0; i <= longintsize; i++)
	{
		temp = (n << i) >> longintsize;
		if (!flag && temp == 1)
			flag = 1;
		if (flag)
		{
			num = temp + '0';
			write(1, &num, 1);
		}
	}
	if (n == 0)
		write(1, "0", 1);
}

