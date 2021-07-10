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
int j;
int k;
int m;

while (i <= 57)
{
j = 48;
while (j <= 57)
{
k = i;
m = j + 1;
while (k <= 57)
{

while (m <= 57)
{
putchar (i);
putchar (j);
putchar (32);
putchar (k);
putchar (m);
if (m < 57 || j < 56 || i < 57 || k < 57)
{
putchar (44);
putchar (32);
}
m++;
}
m = 48;
k++;
}
j++;
}
i++;
}
putchar (10);
return (0);
}
