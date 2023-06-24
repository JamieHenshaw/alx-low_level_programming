#include "main.h"

/**
 * _strcpy - Copies a string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of characters to copy.
 *
 * Return: Pointer to the destination string (dest).
 */

char *_strcpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}

	while (j < n)
		{
		dest[j] = '\0';
		j++;
		}

	return (dest);
}
