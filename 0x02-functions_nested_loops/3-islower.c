#include "main.h"
/**
 * _islower - show 1 if input is a lower case
 * another case show 0
 *
 * @c: The caharacter in ASCII code
 *
 * Return: 1 for lowercase character. 0 for thr rest.
 */
int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}


