#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < co; b++)
		{
			_putchar(' ');
		}
		_purtchar('\\');
		_putchar('\n');
	}
}
