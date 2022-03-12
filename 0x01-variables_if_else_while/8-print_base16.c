#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
char c;

x = 48;
while (x < 58)
{
putchar(x);
x++;
}
c = 'a';
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
