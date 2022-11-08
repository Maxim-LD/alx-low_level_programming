#include "main.h"

/**
 * _strdup - returns a pointer to a string which is a duplicate of another
 * string
 *
 * @str: string to be copied
 *
 * Return: NULL or insufficient memory if str is null
 * otherwise; a pointer to the new string
 */

char *_strdup(char *str)
{
	int i;
	int strlen;
	char *cpy_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strlen++;

	cpy_str = malloc((strlen + 1) * sizeof(char));

	if (cpy_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy_str[i] = str[i];
	}

	cpy_str[strlen] = '\0';

	return (cpy_str);
}
