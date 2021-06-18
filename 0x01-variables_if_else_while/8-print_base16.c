#include <stdio.h>
#include <ctype.h>
/**
* main-Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char *str[] = "0123456789ABCDEF";

while (str[i])
{
putchar(tolower[*str[i]]);
i++;
}
putchar('\n');
return (0);
}

