#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers of base 10
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
