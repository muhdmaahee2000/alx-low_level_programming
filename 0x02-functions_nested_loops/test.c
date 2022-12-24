#include "main.h"
/*
 * main- print alphabet in lower case 
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++);
	{
		_putchar(ch);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();

	return 0.
}
