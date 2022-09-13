#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of all the multiples of 3 or 5
 * below 1024
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum = 0;

	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum += i;
		}
		else if ((i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
