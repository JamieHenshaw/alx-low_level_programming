#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array that contains the programme command line arguments
 *
 * Return: 0 (success)
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
