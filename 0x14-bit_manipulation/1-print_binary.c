#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary form
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1ul << ((sizeof(unsigned long int) * 8) - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
	else
	{
		_putchar('0');
	}
	mask >>= 1;
	}
}

