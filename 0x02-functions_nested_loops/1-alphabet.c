#include "main.h"

/**
 * Description: print_alphabet - the alphabets, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
