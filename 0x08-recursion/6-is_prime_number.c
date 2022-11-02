#include "main.h"

/**
 * check_prime - checks for prime number
 *
 * @n: number to check
 * @c: iterator
 *
 * Return: 1 if number is prime
 */

int check_prime(int n, int c)
{
	if (c == 1)
		return (1);
	if (n % c == 0 && c > 0)
		return (0);
	return (check_prime(n, c - 1));
}
/**
 * is_prime_number - determines a prime number
 *
 * @n: input value
 *
 * Return: 1; if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
		return (check_prime(n, n - 1));
}
