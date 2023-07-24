#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src to the buffer
 *           pointed to by dest, including the terminating null byte.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0'; /* add the null character at the end */
return (start);
}
