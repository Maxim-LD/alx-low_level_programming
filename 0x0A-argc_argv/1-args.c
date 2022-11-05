#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: number of command line arguments.(i.e argument count)
 * @argv: array that contains the program command line arguments.
 * (i.e argument vector)
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
