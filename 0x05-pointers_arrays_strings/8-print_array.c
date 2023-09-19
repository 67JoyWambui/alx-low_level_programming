#include "main.h"
#include <stdio.h>

/**
 *print_array - function to print array elements
 *
 *@a: array
 *@n: number of elements of the array
 */


void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);

		if (num != (n - 1))
			printf(", ");

	}
	printf("\n");




}
