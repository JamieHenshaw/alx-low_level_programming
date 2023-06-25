#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: Amount of bytes
 *
 * Return: pointer to the allocated memory.
 * If Malloc fails, status value will be equal to 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
