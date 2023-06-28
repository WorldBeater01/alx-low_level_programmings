#include <stdio.h>
#include "main.h"
/**
 * print_line - Prints a straight line
 * @n: Line length
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;
		if (n > 0)
		{
			for (i = 0; i < n; i++)
			{
				putchar('_');
			}
		}
	putchar('\n');
}
