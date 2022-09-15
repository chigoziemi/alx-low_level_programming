#include "main.h"

/**
 * print_most_numbers - function 
 *
 * Return: nothing.
 */

void print_most_numbers(void)
{
int n = 0;
while (n < 10)
{
if (n != 2 && n != 4)
_putchar(n + '0');
n += 1;
}
_putchar('\n');
}
#include "main.h"
/**
 * print_most_numbers - Prints except 2 and 4.
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
{
if (num == 2 || num == 4)
{
num++;
}
_putchar(num + '0');
}
_putchar('\n');
}
