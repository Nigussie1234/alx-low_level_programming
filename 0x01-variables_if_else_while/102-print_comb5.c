#include <stdio.h>
/**
*main - prints all possible combinations of two two-digit numbers
*
*Description: prints all possible combinations of two two-digit numbers
*
*Return: void
*/

int main(void)
{
int i = 48;
int j = 48;
int k = 48;
int m;
while (i <= 57)
{
while (j <= 57)
{
k = i;
while (m <= 57)
{
m = 48;
m = j + i;
while (m <= 57)
{
putchar (i);
putchar (j);
putchar (32);
putchar (k);
putchar (m);
if (k < 57 || j < 56 || i < 57 || k < 57)
{
putchar (44);
putchar (32);
}
m++;
}
k++;
}
j++;
}
i++;
}
putchar (10);
return (0);
}
