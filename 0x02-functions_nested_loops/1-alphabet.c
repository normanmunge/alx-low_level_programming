#include <stdio.h>
#include "holberton.h"
/**
* print_alphabet - Function to print alphabet
*
* Description: Program to print alphabet in lowercase followed by new line.
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return;
}
