#include "main.h"

/**
 * _print_rev_recursion - uses recursion
 * @s: string in reverse
 */
void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_Putchar(*s);
	}
}
