#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand(0) - RAND_MAX/2;
if (n>0)
{
printf("%i is positive\n", n);
}
else if (n==0)
{
printf("%i is zero\n", n);
}
else
{
printf("% is negative\n", n);
}
return (0);
}
