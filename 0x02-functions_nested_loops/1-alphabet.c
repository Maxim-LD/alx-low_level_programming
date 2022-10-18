#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lower case alphabets
 * and a new line
 *
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
