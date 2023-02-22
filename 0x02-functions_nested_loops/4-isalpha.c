#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: chracter to compare
 *
 * Return: 1 iftrue, 0 if false
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
