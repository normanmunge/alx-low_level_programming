#include <stdio.h>
#include "holberton.h"
/**
* main-Entry point
*
* Return Always 0 (Success)
*/

int main(void)
{
int i = 0;
char *holberton = "Holberton";
while(*holberton > 0)
{
putchar(*holberton);
i++;
}
putchar(*holberton++);
putchar('\n');
return (0);
}
