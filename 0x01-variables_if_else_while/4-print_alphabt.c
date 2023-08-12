#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <string.h>
/* betty style doc for function main goes there */
/**
 * main - When I was having that alphabet soup,
 * I never thought that it would pay off.
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	
	putchar('\n');
	return (0);
}
