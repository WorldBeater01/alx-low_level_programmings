#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints a straight line
 * @n: Line length
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
