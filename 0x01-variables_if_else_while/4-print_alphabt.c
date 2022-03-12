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
while (x < 'z')
{
while (x != 'e' && x != 'q')
{
putchar(x);
x++;
}
}
putchar('\n');
return (0);
}
