#include <stdio.h>
/**
 *main - prints the largest prime factor
 *
 *description: prints the largest prime factor of the number 612852475143
 *
 *Return: 0
 */

void main()
{
unsigned long n = 612852475143;                                                _putchar (largeprimefactor);                                                   _putchar ('\n');
}
 
int largestprimefactor(unsigned long a)
{
int i = 2 ,largeprimefactor = 2;
     
while (a != 1)
{
if (a % i == 0)
{
while (a % i == 0)
{
a = a/i;
                 
_putchar (i);
                 
if (i > largeprimefactor)
{
largeprimefactor = i;
}
}
} 
         
i++;
}
     
return largeprimefactor;
}
