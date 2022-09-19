#include"main.h"
#include<stdio.h>

/**
 * _strlen - This function returns the length of a string
 * @s: pointer with address value
 *
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
