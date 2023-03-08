#include "main.h"

/**
 * _puts_recursion - uses recurssion
 * @s: string to rescue through
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
