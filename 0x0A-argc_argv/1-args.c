#include <stdio.h>

/**
 * main - This program prints its number of argument
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc;)
	{
		counter++;
		(*argv)++;

		printf("%d\n", counter - 1);
	}

	return (0);
}
