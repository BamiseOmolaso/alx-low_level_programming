#include "main.h"

/**
 * print_line - draw straight line in terminal.
 * @n: no of times _ is printed.
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
