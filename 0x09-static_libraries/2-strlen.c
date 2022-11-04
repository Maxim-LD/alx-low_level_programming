#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string which length is to be determined.
 *
 * Return: The length of string s.
 */

int _strlen(char *s)
{
	int lenStr = 0;

	while (*s++)

		lenStr++;

	return (lenStr);
}
