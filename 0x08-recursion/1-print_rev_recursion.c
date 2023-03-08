#include "main.h"

/**
 * _print_rev_recursion - print reverse recuresion
 * @s: string in recure
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s) /*if statement*/
	{
		_print_rev_recursion(s + 1); /*add s*/
		_Putchar(*s); /*print s*/
	}
}
