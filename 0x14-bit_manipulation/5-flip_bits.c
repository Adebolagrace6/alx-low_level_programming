#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: 1st  number
 * @m: 2nd number
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	while (exclusive)

	{
		count += exclusive & 1;
		exclusive >>= 1;
	}
	return (count);
}
