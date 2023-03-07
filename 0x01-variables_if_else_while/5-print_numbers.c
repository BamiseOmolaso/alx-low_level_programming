#include <stdio.h>
/**
 * main - main block
 * Description - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line
 * Return 0: Success
 */
int main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	putchar('\n');
	return (0);
}
