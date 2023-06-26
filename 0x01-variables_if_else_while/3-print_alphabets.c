#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;
	char letter_upper;
		for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
		for (letter_upper = 'A'; letter_upper <= 'Z'; letter_upper++)
	{
		putchar(letter_upper);
	}
	putchar('\n');
	return (0);
}

