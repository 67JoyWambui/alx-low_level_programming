#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if the strings are equal
 * a negative value if s1 is less than s2, and
 * a positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
        {
                s1++;
                s2++;
        }

        if (*s1 == *s2)

        {
                return (0);
        }

        return (*s1 - *s2);
}

