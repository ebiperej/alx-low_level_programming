#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* main - program that multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int nb1, nb2, mul;

	if (argc == 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		mul = nb1 * nb2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
