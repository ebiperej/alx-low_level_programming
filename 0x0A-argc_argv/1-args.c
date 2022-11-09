#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* main - entry point
* @argc: argument count
* @argv: argument vector
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int index;

	if (argc > 1)
	{
		int sum;

		for (index = 0; index < argc; index++)
			sum = argc + 1;
			printf("%d\n", sum);
	}
	else
		printf("No argument provided\n");
return (0);
}
