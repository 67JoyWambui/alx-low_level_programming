#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list parameter;

	va_start(parameter, n);

		if (n != 0)
		{
			for (i = 0; i < n; i++)
			{
				printf("%d", va_arg(parameter, int));


			if (i < n - 1 && separator != NULL)
				/*checkes if there are more arguments*/
			{
			printf("%s", separator);
			}

			}
		}

		printf("\n");

		va_end(parameter);
}
