#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints Triangle
 * @size: Size of Triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}

