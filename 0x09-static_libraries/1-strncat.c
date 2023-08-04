#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Find the end of the destination string */
	while (*dest_ptr != '\0')
		dest_ptr++;

	/* Append at most n characters from src to dest */
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* Add null-terminator to the end of the concatenated string */
	*dest_ptr = '\0';

	return (dest);
}
