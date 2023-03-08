#include "main.h"

/**
 * factorial(int n) - print factoril of a given number
 * @n: given number
 * Return: returns print factoria or -1
 */
int factorial(int n);
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (n * factorial(n - 1));
}
