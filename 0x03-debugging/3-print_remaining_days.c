#include "holberton.h"
#include <stdio.h>
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
  
{
int feb = 28;
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
feb = 29;
}

switch (month)
{
case 2:
day = 31;
break;
case 3:
day = 31 + feb + day;
break;
case 4:
day = 31 + feb + 31 + day;
break;
case 5:
day = 31+ feb + 31 + 30 + day;
break;
case 6:
day = 31 + feb + 31 + 30 + 31 + day;
break;
case 7:
day = 31 + feb + 31 + 30 + 31 + 30 + day;
break;            
case 8:
day = 31 + feb + 31 + 30 + 31 + 30 + 31 + day;
break;
case 9:
day = 31 + feb + 31 + 30 + 31 + 30 + 31 + 31 + day;
break;
case 10:
day = 31 + feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;            
break;            
case 11:
day = 31 + feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;            
break;                        
case 12:
day = 31 + feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;            
break;                                    
}
}
