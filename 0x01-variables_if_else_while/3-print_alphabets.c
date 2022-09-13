#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print alphabet in lower case and then in upper case
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
