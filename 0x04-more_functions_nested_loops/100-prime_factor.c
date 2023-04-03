#include "main.h"
#include <stdio.h>

/**
 * main - print largest prime factor of the number.
 * Return: 0.
 */

int main(void)
{
	long int i, k;

	i = 612852475143;
	for (k = 2; k <= i; k++)
	{
		if (i % k == 0)
		{
			i /= k;
			k--;
		}
	}
	printf("%ld\n", k);
	return (0);
}
