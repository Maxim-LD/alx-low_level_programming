#include "main.h"

/**
 * _pow_recursion - prints the value of a variable
 * to power of another
 *
 * @x: given variable
 * @y: the exponent
 *
 * Return: x exponential y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
