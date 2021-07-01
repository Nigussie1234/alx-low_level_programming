#include "holberton.h"
/**
 *_strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return - pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src);
{
int n = 0;
int m;
while (dest[n] != '\0')
{
++n;
}
for (m = 0; src[m] != '\0'; ++m; ++n)
{
dest[n] = src[m];
}
dest[m] = '\0';
return (dest);
}
