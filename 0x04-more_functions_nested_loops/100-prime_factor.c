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
unsigned long n = 612852475143;
int i = 2, largeprimefactor = 2;
 while (n != 1)
{
if (n % i == 0)
{
while (n % i == 0)
{
n = n / i;
/*    _putchaar (i); */
if (i > largeprimefactor)
{
largeprimefactor = i;
}
}
}
i++;
}
_putchar (largeprimefactor);
_putchar ('\n');
return (0);
}
