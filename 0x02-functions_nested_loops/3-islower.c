#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
/**
* _islower - Function to check if an input is lower case
*
* Description: Program to return 0 if input is lowercase
* Return: Always 0 (Success)
*/

int _islower(int c)
{
if (islower(c))
{
return 1;
}
return 0;
}

