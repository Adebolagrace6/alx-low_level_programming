#include "main.h"

/**
 * factorial - You mustn't be afraid to dream a little bigger, darling
 * @n: number to return the factorial from
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
