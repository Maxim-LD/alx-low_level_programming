#include "main.h"
/**
 * void print_alphabet_x10 - prints lowercas
 * alphabets 10 times
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int lw;
	int k = 0;

	while (k < 10)
	{
		lw = 'a';
		while (lw <= 'z')
		{
			_putchar(lw);
			lw += 1;
		}
		_putchar(10);
		k += 1;
	}
	
}
