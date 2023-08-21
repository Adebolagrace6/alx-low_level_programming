#include "main.h"

/**
 * _puts - prints a string, then a new line
 * @str: print str
 * Return: str
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
