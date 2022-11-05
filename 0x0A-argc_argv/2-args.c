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
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
