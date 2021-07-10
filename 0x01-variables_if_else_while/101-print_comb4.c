#include <stdio.h>
/**
*main - prints all possible different combinations of three digits
*
*Description: prints all possible different combinations of three digits
*
*Return: void
*/

int main(void)
{
int i;
int j;
int k;
for (i = 48; i <= 57; i++)
{
j = i + 1;  
for (j = 48; j <= 57; j++)
{
k = j + 1;
for (k = 48; k <= 57; k++)
{
putchar (i);
putchar (j);
putchar (k);
if (k < 57 || j < 56 || i < 55)
{
putchar (44);
putchar (32);
}
}
}
}
putchar (10);
return (0);
}
