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

	if (argc > 0)
	{
		for (index = 0; index < argc; index++)
			printf("%s\n", argv[0]);
	}
	else
		printf("No argument provided or invalid program name.\n");
return (0);
}
