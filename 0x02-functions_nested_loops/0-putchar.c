#include <main.h>

/* betty style doc for function main goes there */
/**
 * main: Prints _putchar with _putchar
 * Description: Prints _putchar with _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 1;
char a;
char b[] = "_putchar\n";
while (i <= 9)
{
a = b[i];
_putchar(a);
i++;
}
return (0);
}
