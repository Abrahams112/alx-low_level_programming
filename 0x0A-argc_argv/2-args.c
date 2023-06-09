#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		for (count = 0; count < argc;)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	else
	{
		printf("\n");
	}

	return (0);
}
