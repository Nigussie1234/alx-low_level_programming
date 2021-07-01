#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array
 * @n: is an integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
int c, t;
 
for (c = 0; c < n / 2; c++)
{
t = a[c];
a[c] = a[n-c-1];
a[n-c-1] = t;
}
}
