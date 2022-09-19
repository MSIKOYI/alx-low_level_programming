#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array that will be printed
 * @n: number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	{
		printf("\n");
		return;
	}
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
