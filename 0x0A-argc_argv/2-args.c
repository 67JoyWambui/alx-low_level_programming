#include <stdio.h>

/**
 * main - entry point
 * Description - a program that prints all arguments it receives
 * @argc: the first argument
 * @argv: the second argument
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{

	int num;

	for (num = 0; num < argc; num++)

	printf("%s\n", argv[num]);

	return (0);
}
