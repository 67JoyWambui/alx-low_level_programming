#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Desvription - a program that multiplies two numbers
 * @argc: the first argument
 * @argv: the second argument
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");

	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
