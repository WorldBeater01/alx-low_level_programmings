#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Prints numbers 0 to 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;
		for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		putchar('0' + n);
	}
	putchar('\n');
}
