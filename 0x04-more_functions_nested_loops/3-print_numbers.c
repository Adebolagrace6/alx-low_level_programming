#include "main.h"

/**
 * print_numbers - The numbers speak for themselves
 * return: void n
 * Return: new line
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
