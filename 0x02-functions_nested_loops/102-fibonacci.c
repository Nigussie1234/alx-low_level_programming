#include <stdio.h>
/**
*main - prints  the first 50 fibonacci  numbers
*
*Description: prints the first 50 fibonacci  numbers
*
*Return: 0
*/
int main(void)
{
int n, first = 0, second = 1, next;
for (n = 0; n <= 49; n++)
{
if (n <= 1)
next = n;
else
{
next = first + second;
first = second;
second = next;
}
printf("%d\n", next);
}
return (0);
}
