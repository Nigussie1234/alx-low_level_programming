#include "holberton.h"
/**
 *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: n is an integer
 *
 * Return - pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n);
{
char i = 0;
char j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[i];
}
dest[i + j] = '\0';
return (dest);
}
