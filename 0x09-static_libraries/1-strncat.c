#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @n: the bytes in src
 * @src: the first string
 * @dest: the second string
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
        int m = 0;
        int N = 0;

        while (dest[m] != '\0')
        {
                m++;
        }

        while (src[N] != '\0' && N < n)
        {
                dest[m] = src[N];
                m++;
                N++;
        }

        dest[m] = '\0';

        return (dest);
}

