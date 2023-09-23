#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		if (str[s] >= 'a' && str[s] <= 'z')
		{
			if (str[s - 1] == ' ' ||
			str[s - 1] == '\t' ||
			str[s - 1] == '\n' ||
			str[s - 1] == ',' ||
			str[s - 1] == ';' ||
			str[s - 1] == '.' ||
			str[s - 1] == '!' ||
			str[s - 1] == '?' ||
			str[s - 1] == '"' ||
			str[s - 1] == '(' ||
			str[s - 1] == ')' ||
			str[s - 1] == '{' ||
			str[s - 1] == '}' ||
			s == 0)
			{
				str[s] -= 32;
			}
		}
		s++;
	}

	return (str);
}
