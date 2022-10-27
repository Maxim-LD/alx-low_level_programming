#include "main.h"

/**
 * rot13 - encode a string using rot13
 *
 * @s: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	char *p;
	char shift;

	for (p = s; *p; ++p)
	{
		shift = 'A' + (*p & 32);
		if (('a' <= *p && *p <= 'z') || ('A' <= *p && *p <= 'Z'))
			*p = (*p - shift + 13) % 26 + shift;
	}

	return (s);
}
