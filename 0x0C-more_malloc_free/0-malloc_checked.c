#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -> cause normal process termination with a status value of 98
 *
 * @b: The num of allocated bytes
 *
 * Return: a pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
