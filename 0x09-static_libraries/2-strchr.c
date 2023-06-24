#include "main.h"
#include <stddef.h>

/**
* _strchr - Locates the first occurrence of a character in a string
* @s: The input string
* @c: The character to be located
*
* Return: A pointer assg first occurrence of the char in the string, or NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
