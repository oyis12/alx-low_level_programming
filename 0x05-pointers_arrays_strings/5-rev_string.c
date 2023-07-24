#include "main.h"
#include "stdio.h"
#include <string.h>

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 *
 * Return: void
*/
void rev_string(char *s)
{
int i, j, len = strlen(s);
for (i = 0, j = len - 1; i < j; i++, j--)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
