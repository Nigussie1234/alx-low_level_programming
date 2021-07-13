#include "holberton.h"
#include <stdlib.h>

/**
 **str_concat - 
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
int length1, length2, i, length;
char *string;

if (s1 == NULL)
{
s1 = '\0';
}
if (s2 == NULL)
{
s2 = '\0';
}
length1 = 0; 
while (*(s1 + length1) != '\0')
{
length1++;
}

length2 = 0;
while (*(s2 + length2) != '\0')
{
length2++;
}
length = length1 + length2;

string = (char *) malloc(length *sizeof(char) + 1);
if (string == NULL)
return (NULL);

for (i = 0; i < length1; i++)
{
string[i] = s1[i];
}
for (i = 0; i < length2; i++)
{
string[i + length1] = s2[i];
}
string[i] = '\0';


return (string);
}
