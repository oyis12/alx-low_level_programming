#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copies a string up to 'n' characters.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination buffer.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
/* If the length of src is less than n, pad the destination with null characters */
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
