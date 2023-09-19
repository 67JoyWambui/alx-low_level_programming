#include "main.h"
/**
 *rev_string - function to reverse a string
 *
 *@s: the string
 */

void rev_string(char *s)
{
	char x = s[0];
	int index = 0;
	int num;

	while (s[index] != '\0')
		index++;

	for (num = 0; num < index; num++)
	{
		index--;
		x = s[num];
		s[num] = s[index];
		s[index] = x;

	}
}
