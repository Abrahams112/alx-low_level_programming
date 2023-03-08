#include "main.h"

/**
 * print a string followed by a new line
 * puts_recursion - follow by a new line
 * @s
 */

void _puts_recursion(char *s);
{
	if (*s)
	{
		putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar("\n");

}
