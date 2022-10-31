#include "main.h"

/**
 * _strstr - function finds the first occurrence of
 * the substring needle in the string haystack
 *
 * @haystack: the string to be checked
 * @needle: the string to be found
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = j = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0' && haystack[i] != needle[j])
		i++;
	while (haystack[i] == needle[j])
	{
		if (needle[j] != '\0')
			return (&haystack[i]);
		i++;
		j++;
	}
	return (0);
}
