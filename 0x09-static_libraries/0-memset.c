#include "main.h"

/**
* _memset - Fill a block of memeory with a set value
* @s: Starting address of the memory block to be filled
* @b: The desired value
* @n: Number of bytes to be changed
*
* Return: A pointer to the memory block(s) with the modified value
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
