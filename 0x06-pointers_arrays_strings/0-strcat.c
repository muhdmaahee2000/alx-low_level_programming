#include "holberton.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
#include"main.h"

/**
 * _strcat - concatenate two string
 * @dest: pointer detination
 * @src: pointer source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != 0)
	{
		a++;
	}
	b = 0;
	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
