#include <stdio.h>
#include "main.h"

 /**
 * main - prints the alphabet
 * in lowercase, followed by a new line.
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
