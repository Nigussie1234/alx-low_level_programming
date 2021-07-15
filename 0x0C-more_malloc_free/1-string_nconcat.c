#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *king;
unsigned int i, len, j;
unsigned int size;

len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len] != '\0')
len++;
size = (len + n) * sizeof(*king);
king = malloc(size + 1);
if (king == NULL)
return (NULL);
i = 0;
while (i < size && s1[i] != '\0')
{
king[i] = s1[i];
i++;
}
j = 0;
while (i < size && s2[j] != '\0')
{
king[i] = s2[j];
i++;
j++;
}
king[i] = '\0';
return (king);
}
