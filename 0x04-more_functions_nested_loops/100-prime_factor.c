#include <stdio.h>
/**
 *main - prints the largest prime factor
 *
 *description: prints the largest prime factor of the number 612852475143
 *
 *Return: 0
 */

int main()
{
long int n;
n = 612852475143;
long int i = 2, ans = 0, largestfactor;
while (n != 0)
{
if (n % i != 0)
i = i + 1;
else
{
largestfactor = n;
n = n / i;
if (n == 1)
{
_putchar (largestfactor);
ans = 1;
break;
}
}
}
return 0;
}
