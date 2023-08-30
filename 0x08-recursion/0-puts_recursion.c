#include "main.h"

/**
 * _puts_recursion - She locked away a secret, deep inside herself,
 * something she once knew to be true... but chose to forget
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
