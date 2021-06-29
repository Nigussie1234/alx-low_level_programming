#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: s is a character
 * Return: void
 */
void rev_string(char *s)
{
char s, r;
int begin , end, count = 0 ;

gets (s);

while (s[count] != '\0')
count ++;
end = count - 1 ;
for (begin = 0; begin < count; begin++)
{
r[begin] = s[end];
end--;
}
r[begin] = '\0';
 
}
