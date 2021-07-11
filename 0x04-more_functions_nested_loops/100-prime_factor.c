#include <stdio.h>
/**
 *main - prints the largest prime factor
 *
 *description: prints the largest prime factor of the number 612852475143
 *
 *Return: 0
 */

#include <stdio.h>

/**
 * main - prints the highest prime factor of 612852475143
 *
 * Return: 0 if successful
 */
int main(void)
{
unsigned long int prime = 612852475143;
unsigned long int i = 3;

while (i <= prime / 2)
{
if (prime % i == 0)
{
prime = prime / i;
}
else
{
i += 2;
}
}
_putchar (prime);
_putchar ('\n');
return (0);
}
