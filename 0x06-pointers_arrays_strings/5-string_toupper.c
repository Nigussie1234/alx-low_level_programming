#include "holberton.h"

/**
 * upper_string - changes all lowercase letters of a string to uppercase
 * @s: is a string
 * Return: void
 */

char *string_toupper(char *s)
{
int c = 0;
   
while (s[c] != '\0')
{
if (s[c] >= 'a' && s[c] <= 'z')
{

s[c] = s[c] - 32;
}
c++;
}
}
