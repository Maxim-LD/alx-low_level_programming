#include "main.h"

/**
 * print_to_98 - prints all numbers to 98
 *
 * @c: to be used
 *
 * Return: return void
 */

void print_to_98(int c)
{
	if (c > 98)
	{
		for (; c > 98; c--)
		{
			_putchar(c);
		}
	}
	else if (c < 98)
	{
		for (; c < 98; c++)
		{
		_putchar(c);
		}
	}
	_putchar(c);
}
