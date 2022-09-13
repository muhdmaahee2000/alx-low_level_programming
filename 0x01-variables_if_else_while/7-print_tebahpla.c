#include <stdio.h>
#include <stdlib.h>

/**
 * main  - Reverse the alphabet from z to a in lower case
 *
 * Return: always 0.
 */
int main(void)
{
	char (ch);

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
