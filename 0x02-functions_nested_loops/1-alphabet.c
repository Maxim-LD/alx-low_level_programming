#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int lw = ('a');

	while (lw <= 'z')
	{
		_putchar(lw);

		lw += 1;
	}

	_putchar('\n');

}
