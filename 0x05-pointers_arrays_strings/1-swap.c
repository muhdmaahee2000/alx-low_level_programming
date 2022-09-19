#include"main.h"
#include<stdio.h>

/**
 * swap_int - This function swaps the value of
 * two integers.
 * @a: pointer with address value
 * @b: pointer with address value.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
