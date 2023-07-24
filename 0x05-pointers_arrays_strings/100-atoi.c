#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
*/
int _atoi(char *s)
{
int result = 0;
bool negative = false;
int i;
for (i = 0; s[i] != '\0'; ++i)
{
if (s[i] == '-')
{
negative = !negative; /* Flip the sign */
}
else if (s[i] == '+')
{
continue;
}
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else if (result > 0)
{
 /* We've started processing a number, but now we're past it, so stop processing */
break;
}
}
return (negative ? -result : result);
}
