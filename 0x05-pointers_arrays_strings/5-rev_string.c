#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: s is a string
 * Return: void
 */
void rev_string(char *s)
{
int i, last, half;
char first, last;

i = 0;
while (s[i] != '\0')
{
i++;
}
max = i - 1;
half = max / 2;
while (half >= 0)
{
first = s[max - half];
last = s[half];
s[half] = first;
s[max - half] = last;
half--;
}
}
