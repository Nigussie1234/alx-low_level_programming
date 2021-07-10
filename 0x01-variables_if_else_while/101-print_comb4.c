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
int i = 48;
int j = 48;
int k = 48;
while (i <= 57)
{
j = i + 1;
while (j <= 57)
{
k = j + 1;
while (k <= 57)
{
putchar (i);
putchar (j);
putchar (k);
if (k < 57 || j < 56 || i < 55)
{
putchar (44);
putchar (32);
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
