#include "main.h"

/**
 * print_line - The shortest distance between two points is a straight line
 * @n: number of timesa char should be printed
 * Return: n
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
