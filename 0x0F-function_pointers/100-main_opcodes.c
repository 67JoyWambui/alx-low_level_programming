#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry point
 * a program that prints the opcodes of its own main function.
 * @argc: the first argument
 * @argv: the second argument
 * Return: 0  on success
 */

int main(int argc, char **argv)
{
	int n; /*no. of bytes to print*/
	char *a; /*address of the function*/
	int  j;

	/*check if the prints two arguments, ie the*/
	 /*program name and the number of byqtes.*/
		if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}

		n = atoi(argv[1]);

		if (n < 0)
		{
			printf("Error\n");
			exit(2);
		}

		a = (char *)main;

		for (j = 0; j < n; j++)
		{
		if (j == n - 1)
		{
			printf("%02hhx\n", a[j]);
			break;
		}
		printf("%02hhx ", a[j]);
		}

	return (0);
}
