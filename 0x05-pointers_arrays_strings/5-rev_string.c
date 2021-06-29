#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: s is a character
 * Return: void
 */
void rev_string(char *s)
{
char r;
int begin , end, i = 0;

while (s[i] != '\0')
i++;
end = i - 1 ;
for (begin = 0; begin < i; begin++)
{
r[begin] = s[end];
end--;
}
r[begin] = '\0';
 
}
