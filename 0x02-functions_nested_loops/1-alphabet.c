#include <stdio.h>
#include <main.h>

/**
 * main - Print a - z
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch ++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
