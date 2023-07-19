#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - input: date output: how many days are
 * remaining in the year
 * @month: month format
 * @day: day
 * @year: the year
 * Return: its a void
 */
void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0) || (year % 400 == 0 && year % 100 == 0))
{
if (day >= 60 && month > 2)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (day == 60 && month == 2)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}

