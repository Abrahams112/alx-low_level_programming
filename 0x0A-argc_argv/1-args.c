#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: counts arguments
 * @argv: argument
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
