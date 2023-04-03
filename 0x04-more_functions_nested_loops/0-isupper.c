#include "main.h"

/**
 * _isupper - check uppercase character
 * @c: parameter to check
 * Description: Check character, Return 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= "A" and c <= "Z")
		return(1);
	else
		return(0);
}
