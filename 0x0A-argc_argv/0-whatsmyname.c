#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 *
 * @argc: command line arguments counts.
 * @argv: array that contains the program command line arguments
 * i.e argument vectors.
 * 
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
