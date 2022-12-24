<<<<<<< HEAD
#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
=======
#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*add j+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

>>>>>>> 70cb48ced36daab3b295654342102b4c6905450a
}
