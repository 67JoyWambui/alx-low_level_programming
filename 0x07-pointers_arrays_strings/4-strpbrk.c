#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 *
 * Return: pointer to the byte in s that matches accept otherwise 0
 */

char *_strpbrk(char *s, char *accept)
{
	int  n;

	for (; *s != '\0'; s++) /*no initialization of s hence ;*/
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
		/*the checking if character in s matches in accept*/
			if (*s == accept[n])
			{
				return (s);
			}
		}
	}
	return (0);
}
