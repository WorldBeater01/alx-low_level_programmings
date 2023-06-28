#include <stdio.h>
/**
 * FizzBuzz - Does fizzbuzz
 *
 * Return: 1
 */

void FizzBuzz(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 15 == 0)
                {
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('F');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else
		{
			int num = i;
			do
			{
				putchar('0' + (num % 10));
				num /= 10;
			}
			while (num != 0);
			putchar(' ');
		}
	}
}
	
