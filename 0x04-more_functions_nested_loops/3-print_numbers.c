#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Prints numbers 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n;
		for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
}
