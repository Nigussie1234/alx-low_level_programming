#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @src: source 
 * @dest: dest
 * @n: n is an integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{

*char_dest++ = *char_src++;
}

return (dest);
}
