#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n
 * @a: array name
 * @n: number of elements OF the array to be printed
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < (n - 1); l++)
	{

		printf("%d, ", a[l]);

	}

	if (l == (n - 1))

	{

		printf("%d", a[n - 1]);

	}

	printf("\n");
}
