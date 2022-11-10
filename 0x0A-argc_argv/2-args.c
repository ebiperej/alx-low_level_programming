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
	if (argc > 0)
	{
		int i;

		for (i = 0; i <= argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
		printf("No arguments provided");
	return (0);
}
