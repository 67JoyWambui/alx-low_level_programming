#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of
 *	a square matrix of integers
 * @a: the array
 * @size: the number of rows and column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int index;
	int num1 = 0;/*main diagonal*/
	int num2 = 0;/*secondary diagonal*/
	
	for (index = 0; index < size; index++)
	{
		/*calculate sum by getting elements at index*/
		num1 += a[index * size + index];
		num2 += a[index * size + (size - 1 - index)];
	}

	printf("%d, %d\n", num1, num2);
}
