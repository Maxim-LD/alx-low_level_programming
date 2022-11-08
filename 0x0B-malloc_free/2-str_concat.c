#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: First string to concatenate
 * @s2: Second string
 *
 * Return: NULL - if failed, Pointer to new string - if in case of success
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	int concat_i = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(len * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
