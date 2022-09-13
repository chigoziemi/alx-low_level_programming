#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 50 fibonacci number
 *
 * Return: Always success.
 *
 */

int main(void)
{
	int i;
	long int fib1 = 0;
	long int fib2 = 1;
	long int next_fib;
	long int sum = 0;

	for (i = 0; i < 50; i++)
	{
		next_fib = (fib1 + fib2);
		fib1 = fib2;
		fib2 = next_fib;

		if (((next_fib % 2) == 0) && (next_fib <= 4000000))
		{
			sum += next_fib;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
