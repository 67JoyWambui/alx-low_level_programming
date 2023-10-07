#include <stdlib.h>
#include "main.h"

/**
 * main - a function that multiplies two positive numbers
 * @argc: the first argument
 * @argv: second argument
 *
 * Return: 0 on success
 */

int main( int argc, char **argv)
{
	int n, m;
	long unsigned int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	for (n = 1; n < 2; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] < '0' || argv[n][m] > '9')
			{
				printf("Error\n");
				exit(98);

			}

		}
	}

	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
