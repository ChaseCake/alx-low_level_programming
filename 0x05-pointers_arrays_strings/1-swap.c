#include "main.h"

/**
 * swap_int - swap value of two num
 * @b: first pointer
 * @a: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
