#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and space
 * Numbers should be printed in ascending order
 * You can only use the putchar function 4 times
 * All code should be in the main function
 * DO not use any varible of type char
 */
int main(void)
{
	int i = 0;
	
	while(i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return(0);
}
