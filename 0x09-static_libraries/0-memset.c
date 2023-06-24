#include "main.h"

/**
* _memset - Fill a block of memeory with a set value
* @s: starting adress of the memory block to be filled
* @b: the desired value
* @n: number of bytes to be changed
*
* Return: a changed array with a new value for n bytes
*/

char *_memset(char *s, char b, unassigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
