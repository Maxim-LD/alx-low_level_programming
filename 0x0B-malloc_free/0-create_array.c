#include "main.h"

/**
 * create_array - creates an array of chars.
 *
 * @size: array size.
 * @c: stored char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j = 0;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	while (j < size)
	{
		array[j] = c;
		j++;
	}
	return (array);
}
