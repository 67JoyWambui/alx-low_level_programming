#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: a program that adds positive numbers
 * @argc: the first argument
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise 1
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int result = 0;

	num1 = 1;
	num2 = 0;

	for (; num1 < argc; num1++)
	{
		for (; argv[num1][num2] != '\0'; num2++)
		{
			if (argv[num1][num2] < '0' || argv[num1][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result = result + atoi(argv[num1]);

	}
	printf("%d\n", result);

	return (0);
}
