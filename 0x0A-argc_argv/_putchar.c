#include <stido.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character which gets printed
 *
 * Return: 1 on success
 * Error: -1 is returned and errno is set
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
