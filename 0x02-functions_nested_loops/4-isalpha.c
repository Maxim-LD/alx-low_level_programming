#include "main.h"

/**
 * _isalpha - return 1 if c is a letter(lowercase or uppercase)
 * 
 * @c: character examined
 *
 * return: 1 for satisfying the condition and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);

	return (0);	
}
