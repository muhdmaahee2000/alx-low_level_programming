#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - this function print the last number of a digit.
 *
 * @j: is an acii character
 *
 * Return: Always 0.
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i > 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
