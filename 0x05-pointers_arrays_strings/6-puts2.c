#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: The string to print
 *
 * Return: void
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
