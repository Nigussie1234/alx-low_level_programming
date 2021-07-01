#include "holberton.h"
/**
 *_strcmp - compares two strings
 * @s2: string 2
 * @s1: string 1
 *
 * Return: 1 or 0
 */

int _strcmp(char *s1, char *s2)
{
int n = 0;
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
m = 1;
}
s1++;
s2++;
}
if (m == 0)
{
return 0;
}
else
return 1;
}
