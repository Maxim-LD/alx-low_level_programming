#include "main.h"

/**
 * _islower - return 1 after checks for lowercase character
 * else returns 0
 *@c: character to be checked
 *
 * Return: 1 for lowercase, 0 for others
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	return (0);
}
