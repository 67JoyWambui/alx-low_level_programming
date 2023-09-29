#include <stdio.h>
#include <stdlib.h>

/**
 * isPositive - chekes if ptr is an integer
 * @ptr: string being checked
 *
 * Return: 0 on success, otherwise 1
 */

int isPositive(const char *ptr)
{
	while (*ptr != '\0')
	{

		if (*ptr < '0' || *ptr > '9')
		{
			return (0);
		}

		ptr++;

	}

	return (1);
}

/**
 * main - the entry point
 * @argc: number of arguments
 * @argv: the array of strings og arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)/* start from 1 to skip program name*/
	{
		if (!isPositive(argv[i]))
		{
			printf("Error\n");

			return (1);
		}

		sum = sum + atoi(argv[1]);
	}

	printf("%d\n", sum);
	return (0);
}
