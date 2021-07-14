#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostc - concatenates all the arguments of your program
 * @ac: integet
 * @av: character
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
int length, i;
char *str1;

if (ac == 0 || av == NULL)
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
