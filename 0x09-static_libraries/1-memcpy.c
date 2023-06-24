#include "main.h"

/**
* _memcpy - is a function that copies the memory area
* @dest: pointer to the destination memory area
* @src: pointer to the source memory area
* @n: The number of bytes to copy
*
* Return: pointer to the destination memory area (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
