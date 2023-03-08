#include "main.h"

/**
 * _puts_recursion - uses recurssion
 * @s: string to rescue through
 */

void _puts_recursion(char *s);
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s++);
	}
	else
		_putchar('\n');

}
