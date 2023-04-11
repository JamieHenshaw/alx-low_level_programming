#include "main.h"

/**
 * get_endianness - function that checkd the endianness
 *
 * Return:  id big endian,  if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (cahr *) &x;

	retun ((int)*c);
}
