#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: int
 * @argc: int
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
