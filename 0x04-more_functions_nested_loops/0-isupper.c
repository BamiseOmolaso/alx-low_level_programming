#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c : character to check
 * Description: function checks for uppercase and return 1, 0 for lowercase
 */
int _isupper(int c)
{
	if(c >= 'A' and c <= 'Z')
		return(1);
	else
		return(0);
}
