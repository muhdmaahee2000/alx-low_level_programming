#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet in lower case 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch, i;

	for (i = 0; i >= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
