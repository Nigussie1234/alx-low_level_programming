#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *int_index - function that searches for an integer
 *@array: an array
 *@size: the number of elements in the array array
 *@cmp: pointer to the function to be used to compare values
 *
 *Return: -1 or index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0 && array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
