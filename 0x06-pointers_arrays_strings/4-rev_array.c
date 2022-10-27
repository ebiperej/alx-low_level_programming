#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: array to be reversed
 * @n: length of array k
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int k;

	n = n - 1;
	while (i < n)
		{
		k = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = k;
		i++;
		n--;
		}
}
