#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array to evaluate
 * @n: how many int to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%s%d", (i == 0) ? "" : ", ", a[i]);
	}
	printf("\n");
}
