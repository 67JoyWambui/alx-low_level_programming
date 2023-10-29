#include <stdio.h>

/**
 * main - the entry point
 * Description - a program that prints the number of arguments passed into it
 * @argc: the first argument
 * @argv: the second argument
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

		return (0);
}
