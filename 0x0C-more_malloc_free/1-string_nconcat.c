#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL if memory allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int s1_len = 0, s2_len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s1_len = strlen(s1);
s2_len = strlen(s2);
if (n >= s2_len)
n = s2_len;
result = (char *)malloc(s1_len + n + 1);
if (result == NULL)
return (NULL);
strncpy(result, s1, s1_len);
strncpy(result + s1_len, s2, n);
result[s1_len + n] = '\0';
return (result);
}
