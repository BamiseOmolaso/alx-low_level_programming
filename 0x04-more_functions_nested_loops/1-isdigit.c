#include "main.h"

/**
 * _isdigit - check for digit 0 to 9
 * @c: digit to check
 *
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
		return(1);
	else 
		return(0);
}
