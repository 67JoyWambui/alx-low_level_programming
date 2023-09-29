#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: the array of strings of the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3) /*checks if the arguments are two numbers*/
	{
		printf("Error\n");

		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
