#include "main.h"
/**
 * print_sign - this function prints sign of a numberr.
 *
 * @n: character
 *
 * Return: 1 if n is greater than 0
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
