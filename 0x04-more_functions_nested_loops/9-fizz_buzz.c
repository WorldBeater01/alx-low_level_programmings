#include <stdio.h>
/**
 * FizzBuzz - Does fizzbuzz
 *
 * Return: 0
 */

void FizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
/**
 * main - Main section
 *
 * Return: 0
 */
int main(void)
{
	FizzBuzz();
	return (0);
}
