#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
* main-Entry point
*
* Description: a program to print holberton from pointer
* Return Always 0 (Success)
*/

int main(void)
{
char holberton[] = "Holberton";
int i;
for (i = 0; holberton[i] != '\0'; i++)
{
putchar(holberton[i]);
}
putchar('\n');
return (0);
}
