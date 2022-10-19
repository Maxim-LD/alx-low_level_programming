#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Result: 0 or 1
 */

int _islower(int c)
{
	int lw = ('a');

	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	return (0);
}
