#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *
 *@b: integer
 *
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
int *king
voidg = malloc(b);
if (king == NULL)
{
exit(98);
}
return (king);
}
