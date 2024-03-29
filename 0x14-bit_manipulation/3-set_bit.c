#include "main.h"

/**
 * set_bit - sets bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 58)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
