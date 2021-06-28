#include "holberton.h"

/**
 * swap_int -  a function that swaps the values of two integers
 * @a: an integer
 * @b: b is an integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
