#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: array to be reversed
 *
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
	int p, k, tmp;

	k = n - 1;

	for (p = 0; p < n / 2; p++)
	{
		tmp = a[p];
		a[p] = a[k];
		a[k--] = tmp;
	}
}
