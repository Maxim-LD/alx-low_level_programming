#include "main.h"

/**
 * _abs - prints the absolute value of a an
 * integer
 *
 *@k: integer representation
 *
 * Return: return a value
 */

int _abs(int k)
{
	if (k < 0)
	{
		return (k * -1);
	}
	return (k);
}
