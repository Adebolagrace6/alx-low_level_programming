#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: val
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return ((int)((n >> index) & 1));
}
