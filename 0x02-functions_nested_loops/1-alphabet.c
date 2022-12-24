#include "main.h"

/**
 * main - Print a - z
 *
 * Return: (Always 0)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch ++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
int main()
{
	print_alphabet();

	return (0);
}
