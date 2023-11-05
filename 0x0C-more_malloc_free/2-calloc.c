#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  a function that allocates memory for an array
 * Description: a function that allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: the size of the elements
 *
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	 unsigned int n;
	 char *ptr;


	if (nmemb == 0 || size == 0)
		return (NULL);

		ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < (nmemb * size); n++)
		ptr[n] = 0;

	return (ptr);
}
