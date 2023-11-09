#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list parameter;

	va_start(parameter, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(parameter, char *);

		if (string == NULL)
			printf("(nil)");

		else
			printf("%s", string);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}

	printf("\n");

	va_end(parameter);
}
