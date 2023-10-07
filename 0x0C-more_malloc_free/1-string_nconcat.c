#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m = 0, y = 0;
	char *str;
	unsigned int s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n  > s2_len)
		str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else
		str = malloc(sizeof(char) * (s1_len + n + 1));

	if (!str)
	{
		perror("malloc failed");
		return (NULL);
	}


	while (m < s1_len)
	{
		str[m] = s1[m];
		m++;
	}

	while (n < s2_len && m < (s1_len + n)) /*Ensure tht y won't go beyond length of s2 or n*/
	{
		str[m] = s2[y];
		m++;
		y++;
	}

	while (n >= s2_len && m < (s1_len + s2_len))
		{
			str[m] = s2[y];
			m++;
			y++;
		}

	str[m] = '\0';

	return (str);
}
