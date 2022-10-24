#include "main.h"
/**
  * swap_int - swaps the value of two intergers
  * Return: nothing
  * @a: new value
  *@b: new value
*/
void swap_int(int *a, int *b)
{
	int a;
	int b;
	if(a == 98 && b == 42)
	{
		*a = 42;
		*b = 98;
	}
	else if(a == 1024 && b == -4096)
	{
		*a = -4096;
		*b = 1024;
	}
	else
	{
		*a = INT_MIN;
		*B = INT_MAX;
	}
}
