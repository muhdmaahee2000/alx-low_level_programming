#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch"\n");
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch"\n");
	}
	return (0);
}
