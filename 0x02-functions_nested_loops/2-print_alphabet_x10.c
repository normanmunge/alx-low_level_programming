#include <stdio.h>
#include "holberton.h"
/**
* print_alphabet_x10 - Function to print alphabet
*
* Description: Program to print alphabet in lowercase followed by new line.
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
char ch;
int i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
i++;
}
return;
}
