#include "holberton.h"
/**
 **create_array - creates an array of chars
 *
 *@size: size of memory
 *@c: character
 *
 *Return: NULL or pointer of array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *pointer;
pointer = (char*) malloc(size *sizeof(char));
if (pointer == 0)
{
return (NULL);
}
if (size != '\0')
{
for (i = 0;i < size; i++)
{
*(pointer + i) = c;
}
return (pointer);
}
else
{
return (NULL);
}
}
