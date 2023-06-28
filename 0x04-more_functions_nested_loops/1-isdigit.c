#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks that the entry is a number
 * @c: The character to check
 *
 * Return: 1 if the true 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}


