#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - assign different value of the variable n
 *
 *Description: the programm will assign a random numbers to the variable n each time it is executed
 *
 *Return: 0 (success)
 */
int main(void)
{
int n, digit;
digit=2*n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n,digit);
else if (digit == 0)
printf("Last digit of %d is %d and is 0\n", n,digit);
else if (digit < 6 && digit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n,digit);
return (0);
}
