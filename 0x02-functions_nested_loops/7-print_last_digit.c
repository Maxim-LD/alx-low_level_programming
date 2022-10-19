#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 *@c: character used
 *
 * Return: last digit or nothing
 */

int print_last_digit(int c)
{
	int l;

	l = c % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}

