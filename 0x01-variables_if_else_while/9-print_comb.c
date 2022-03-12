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

x = 48;
while (x < 58)
{
putchar(x);
if (x != 57)
{
putchar(44);
putchar(32);
x++;
}
else
{
x++;
}
}
putchar('\n');
return (0);
}
