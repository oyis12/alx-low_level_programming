#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	/* Print the string in reverse */
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	/* Print a new line */
	putchar('\n');
}
