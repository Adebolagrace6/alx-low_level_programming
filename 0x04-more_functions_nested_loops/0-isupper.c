#include "main.h"

/**
 * _isupper - isupper
 * @c: char to check for uppercase
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
