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
int n, first = 1, second = 2, next;
for (n = 1; n <= 50; n++)
{
next = first + second;
first = second;
second = next;
printf("%d\n", next);
}
return (0);
}
