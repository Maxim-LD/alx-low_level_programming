#include <stdio.h>
#include "main.h"


/**
* main - Prints the word "_putchar"
*
* Return: Always 0
*/

int main(void)
{
	int i;

	char k[] = "_putchar";

	for (i = 0; i < 8; i++)

	{
		_putchar(k[i]);
	}

	_putchar('\n');

	return (0);
}
