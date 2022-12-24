#include "main.h"

/**
 * _isalpha - this function check for
 * alphabetic order
 *
 * @c: character
 *
 * Return: 1 if c is lower case.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
