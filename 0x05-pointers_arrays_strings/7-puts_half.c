#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
*/
void puts_half(char *str)
{
int length = strlen(str);
int n = (length - 1) / 2;
if (length % 2 == 0)
{
printf("%s\n", str + length / 2);
}
else
{
printf("%s\n", str + n);
}
}
