
aucontraire
/
holbertonschool-low_level_programming
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
holbertonschool-low_level_programming/0x06-pointers_arrays_strings/4-strpbrk.c
@aucontraire
aucontraire Add function that searches a string for any of a set of bytes
 1 contributor
27 lines (23 sloc)  429 Bytes
#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: chars to compare
 * Return: pointer from the initial segment of match
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
return (s + i);
}
}
}

return (NULL);
}
