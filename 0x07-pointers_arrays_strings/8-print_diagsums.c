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
int i;
int bdiagsum = 0;
int fdiagsum = 0;
int prev = 0;

for (i = 0; i < size * size; i++)
{
if (i == 0)
{
bdiagsum += *(a + i);
prev = i;
}
else if (i == (prev + size + 1))
{
bdiagsum += *(a + i);
prev = i;
}
}

for (i = 0; i < size; i++)
{
fdiagsum += *(a + (size * (i + 1) - (i + 1)));
}
_putchar (bdiagsum);
_putchar (fdiagsum);
}
