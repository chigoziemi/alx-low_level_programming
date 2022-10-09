#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -> a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 *
 * Return: if the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *frst;
	unsigned int sum = n, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k]; k++)
		sum++;

	frst = malloc(sizeof(char) * (sum + 1));

	if (frst == NULL)
		return (NULL);

	sum = 0;

	for (k = 0; s1[k]; k++)
		frst[sum++] = s1[k];

	for (k = 0; s2[k] && k < n; k++)
		frst[sum++] = s2[k];

	frst[sum] = '\0';

	return (frst);
}
