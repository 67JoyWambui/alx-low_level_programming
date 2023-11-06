#include <stdlib.h>
#include <stdio.h>
/**
 * _isInteger - a function that checks if the numbers are integers
 * @argc: number of arguments
 * @argv: the second argument
 *
 * Return: 0 on success
 */

int _isInteger(int argc, char *argv[])
{
	unsigned int mul;
	int m, n;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (argv[m][n] < '0' || argv[m][n] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}

/**
 * main - entry point
 * @argc: the first argument
 * @argv: second argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	_isInteger(argc, argv);
	return (0);
}
