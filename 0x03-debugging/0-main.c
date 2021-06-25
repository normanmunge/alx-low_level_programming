#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main-Entry point
*
* Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
int i;

srand(time(0));
i = rand() - RAND_MAX / 2;
/* your code goes there */
if (i > 0)
printf("%d is positive\n", i);
else
if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
return (0);
}