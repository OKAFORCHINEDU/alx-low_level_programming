#include "main.h"

/**
 * reverse_array - This program reverses the content of an array int
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 *
 * Return: nothing.
 *
 */

void reverse_array(int *a, int n)

{
	int i, temp;

	n--;

	for (i = 0; i < n; i++, n--)

	{
		temp = a[i];

		a[i] = a[n];

		a[n] = temp;
	}

}
