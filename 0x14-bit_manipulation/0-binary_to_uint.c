#include "main.h"
/**
 * binary_to_uint - binary to uint
 * @b: pointing to a string of 0 and 1 chars
 * Return: unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Return = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			Return = (Return << 1) | 1;
		else if (*b == '0')
			Return  <<= 1;
		else
			return (0);
		b++;
	}
	return (Return);
}
