#include <stdio.h>

void _print(void) __attribute__((constructor));

/**
 * _print - a constructor function
 */

void _print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
