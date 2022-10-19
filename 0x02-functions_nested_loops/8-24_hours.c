#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 *
 * Return: returns 0
 */
void jack_bauer(void)
{
	int m, h;

	for (h = 0; h <= 23; h++)
	{
	for (m = 0; m <= 59; m++);

		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else if (h >= 10)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			if (m < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(m + '0');
			}
			else if (m > 10)
			{
				_putchar(':');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
	}
}
