#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: accepts address of the passed argument its a pointer.
 * @b: accepts address of the passed argument its a pointer.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
