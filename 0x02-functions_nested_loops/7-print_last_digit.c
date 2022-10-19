#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 *@p: character used
 *
 * Return: last digit or nothing
 */

int print_last_digit(int p)
{
        int k;

	k = p % 10;

        if (k < 0)
		
        {
                _putchar(-k + '0');
                return -k;
        }

	else

	{
		_putchar(k + '0');
		return k;
	}
}
