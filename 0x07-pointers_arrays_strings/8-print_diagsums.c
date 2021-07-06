#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of 
 * a square matrix of integers
 * @a: array
 * @dize: the size of the array
 * 
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum1 += a[i][j];
}
if (i == n - j - 1)
{
sum2 += a[i][j];
}
}
}
_putchar (sum1);
_putchar (sum2);
}
