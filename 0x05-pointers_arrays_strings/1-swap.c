#include "main.h"
/**
  * swap_int - swaps the value of two intergers
  * Return: nothing
  * @a: new value
  *@b: new value
*/
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
