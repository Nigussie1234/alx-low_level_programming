#include "holberton.h"

/**
 * cap_string - capitalize all word of a string
 * @s: string array
 * Return: string array
 */

char *cap_string(char *s)
{
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
j = i - 1;
if (s[i] >= 'a' && s[i] <= 'z')
{
if (i == 0)
s[i] = s[i] - 32;
else if (s[j] >= 9 && s[j] <= 10)
s[i] = s[i] - 32;
else if (s[j] >= 32 && s[j] <= 34)
s[i] = s[i] - 32;
else if (s[j] >= 40 && s[j] <= 41)
s[i] = s[i] - 32;
else if (s[j] == 46)
s[i] = s[i] - 32;
else if (s[j] == 59)
s[i] = s[i] - 32;
else if (s[j] == 123 || s[j] == 125)
s[i] = s[i] - 32;
}
}

return (s);
}
