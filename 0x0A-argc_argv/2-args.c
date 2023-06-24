#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the program's command line arguments.
 *
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
