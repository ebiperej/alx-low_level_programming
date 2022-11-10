#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* main - prints all arguments it receives
* @argc: argument count
* @argv: argument vector
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
		printf("No arguments provided\n");
	return (0);
}
