#include <stdio.h>
#include "holberton.h"
/**
* main - Entry point
*
* Description: Program to print alphabet in lowercase followed by new line.
* Return: Always 0 (Success)
*/

void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

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
