#include <stdio.h>

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: array of string of the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
