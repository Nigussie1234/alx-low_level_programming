#include "holberton.h"

/**
 * string_toupper - changes lowercase  string to uppercase
 * @s: is a string
 * Return: void
 */

char *string_toupper(char *s)
{
int c;
   
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] >= 'a' && s[c] <= 'z')
{
s[c] = s[c] - 32;
}
}
return (s);
}
