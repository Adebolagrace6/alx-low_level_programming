#include "main.h"
/**
 * _print_rev_recursion - Why is it so important to dream?
 * Because, in my dreams we are together
 * @s: The string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
