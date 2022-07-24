#include <stdio.h>

/**
 * main - This program prints its number of argument
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: Always 0
 *
 *
 */

int main(int argc, char __attribute__((__unused__)) *argv[])

{
	printf("%d\n", argc - 1);

	return (0);

}
