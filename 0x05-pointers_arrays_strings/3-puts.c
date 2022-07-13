#include "main.h"
#include <stdio.h>


/**
 * _puts - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 *
 *
 * Return (0)
 *
 */



void _puts(char *str)

{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
