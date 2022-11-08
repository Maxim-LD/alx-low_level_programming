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
	unsigned int i;
	unsigned int len;
	char *cpy_str;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		cpy_str = malloc((len + 1) * sizeof(char));

	if (cpy_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		cpy_str[1] = str[1];
	}
	cpy_str[len] = '\0';
	return (cpy_str);
}
