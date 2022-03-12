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
char x;

x = 'a';
while (x <= 'z')
{
if (x != 'e' && x != 'q')
{
putchar(x);
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
