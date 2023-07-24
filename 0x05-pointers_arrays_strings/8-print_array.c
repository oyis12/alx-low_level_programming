#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 *               followed by a new line.
 * @a: An integer array.
 * @n: Number of elements of the array to be printed.
 *
 * Return: Nothing.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
