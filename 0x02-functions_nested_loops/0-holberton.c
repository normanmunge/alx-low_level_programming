#include <stdio.h>
#include "holberton.h"
/**
* main-Entry point
*
* Description: a program to print holberton from pointer
* Return Always 0 (Success)
*/

int main(void)
{
int i = 0;
char *holberton = "Holberton";
putchar(*holberton++);
putchar('\n');
return (0);
}
