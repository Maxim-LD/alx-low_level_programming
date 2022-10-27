#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 *
 * @s: string to capitalize
 *
 * Return: the resulting string 's'
 */

char *cap_string(char *s)
{
	int p, k;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (p = 0; s[p] != '\0'; p++)
	{
		if (p == 0 && s[p] >= 'a' && s[p] <= 'z')
			s[p] -= 32;

		for (k = 0; k < 13; k++)
		{
			if (s[p] == spe[k])
			{
				if (s[p + 1] >= 'a' && s[p + 1] <= 'z')
				{
					s[p + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
