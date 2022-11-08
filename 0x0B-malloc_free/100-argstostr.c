#include "main.h"

/**
 * argstostr - concatenate arguments to strings
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, len, sub, j;
	char *str;

	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	sub = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[sub] = av[i][j];
			sub++;
		}
		str[sub] = '\n';
		sub++;
	}
	return (str);
}

