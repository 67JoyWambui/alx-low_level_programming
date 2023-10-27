#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: the first string to be appended
 * @dest: the second string that will be appended
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
        int m = 0;
        int n = 0;

        while (dest[m] != '\0')
        {
                m++;
        }

        while (src[n] != '\0')
        {
                dest[m] = src[n];
                m++;
                n++;
        }
        dest[m] = '\0';
        return (dest);
}

