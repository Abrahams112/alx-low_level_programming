#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: chracter to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c  <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
