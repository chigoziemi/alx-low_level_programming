#include "main.h"
#include <stdlib.h>

/**
 * _calloc -> a function that allocates memory for an array, using malloc.
 *
 * @nmemb: allocated memory of an array
 * @size: element size for bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *first;
	unsigned int king;

	if (nmemb == 0 ||  size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	first = mem;

	for (king = 0; king < (size * nmemb); king++)
		first[king] = '\0';

	return (mem);
}
