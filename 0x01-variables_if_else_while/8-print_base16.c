#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all nomber of base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
