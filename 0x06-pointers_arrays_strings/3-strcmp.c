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
int m = 0;
while (s1[n] != '\0' && s2[n] != '\0')
{
if (s1[n] != s2[n])
{
m = 1;
break;
}
n++;
}
if (m == 0)
{
return 0;
}
else
return 1;
}
