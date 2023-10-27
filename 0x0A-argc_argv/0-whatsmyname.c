#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * Description -  a program that prints its name, followed by a new line
 *
 * @argc: the first argument
 * @argv: the second argument
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);


	return(0);
}
