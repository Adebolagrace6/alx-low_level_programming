#include "main.h"

/**
 * _isdigit - isdigit
 * @c: checks for a digit
 *
 * Return: 1 if c  or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
