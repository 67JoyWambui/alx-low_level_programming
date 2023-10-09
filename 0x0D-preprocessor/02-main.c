#include <stdio.h>

/**
 * main - entry point
 * Description: this program  prints the name of the file it was 
 *	compiled from, followed by a new line.
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
