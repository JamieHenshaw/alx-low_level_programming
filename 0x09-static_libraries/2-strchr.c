#include "main.h"
#include <stddef.h>

/**
* _strchr - is the entry point
* @s: input
* @c: input
* Return: Always 0 (success)
*/

char *_strchr(char *s, char c)
{
	int 1 = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
