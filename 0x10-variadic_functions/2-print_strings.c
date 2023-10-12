#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  print_strings - a function that prints strings, followed by a new line
 *  @separator: the string to be printed between the strings
 *  @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list bList;
	int j;
	char *str;

	va_start(bList, n);

	for (j = 0; j < (int)n; j++)
	{
		str = va_arg(bList, char *);

		if (str == NULL)
			printf("nil");

		else
			printf("%s", str);

		if (separator != NULL && j < (int)n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(bList);
}


