#include "main.h"

/**
 * main - prints the word "_putchar"
 *
 * return - 0
 */

int main(void) 
{
	int i;
	char k[]= "_putchar";

	for (i = 0, i < 5, i++)
	{
		_putchar(k[i]);
	}
	_putchar("\n");

	return (0);
}
