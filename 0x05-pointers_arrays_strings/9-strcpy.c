#include "main.h"
#include <stdio.h>


/**
 * _strcpy - This copies string pointed to src
 * @dest: char type string
 * @src: char type string
 *
 *
 * Return: Pointer to `dest`
 *
 */



char *_strcpy(char *dest, char *src)

{

	int i;

	for (i = 0; src[i] != '\0'; i++)

	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}
