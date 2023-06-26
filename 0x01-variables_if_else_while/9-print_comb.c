#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
		putchar('0');
	for (a = 1; a < 10; a++)
	{
		putchar(',');
		putchar(' ');
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}

