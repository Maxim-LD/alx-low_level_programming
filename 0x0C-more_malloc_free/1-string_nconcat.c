#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: max number of bytes of s2 to concatenate
 *
 * Return: NULL -if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, length = n;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (p = 0; s1[p]; p++)
		length++;

	concat = malloc(sizeof(char) * (length + 1));

	if (concat == NULL)
		return (NULL);

	length = 0;

	for (p = 0; s1[p]; p++)
	{
		concat[length++] = s1[p];
	}

	for (p = 0; s2[p] && p < n; p++)
	{
		concat[length] = s2[p];
	}

	concat[length] = '\0';

	return (concat);
}
