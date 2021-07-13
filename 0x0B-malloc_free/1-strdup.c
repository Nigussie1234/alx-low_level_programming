#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
int length, i;
char *str1;

if (str == NULL)
{
return (NULL);
}

length = 0;
while (*(str + length) != '\0')
{
length++;
}

str1 = malloc(length *sizeof(char) + 1);
if (str1 == NULL)
return (NULL);

for (i = 0; i < length; i++)
{
str1[i] = str[i];
}
str1[i] = '\0';


return (str1);
}
