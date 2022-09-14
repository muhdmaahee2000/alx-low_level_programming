#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet in lower case 10x
 *
 * Return: Always 0
 */
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
