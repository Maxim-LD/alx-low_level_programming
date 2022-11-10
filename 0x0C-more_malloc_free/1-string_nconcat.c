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
	unsigned int p, k, s1_length, cncat_length;
	char *cncat;

	s1_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (p = 0; s1[p]; p++)
		s1_length++;

	cncat_length = s1_length + n;

	cncat = malloc(sizeof(char) * (cncat_length + 1));
	if (cncat == NULL)
		return (NULL);

	for (p = 0; p < s1_length; p++)
	{
		cncat[p] = s1[p];
	}
	for (k = 0; k < n; k++)
	{
		cncat[k] = s2[k];
	}

	cncat[p] = '\0';

	return (cncat);
}
