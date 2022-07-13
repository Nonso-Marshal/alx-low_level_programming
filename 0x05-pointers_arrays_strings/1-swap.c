#include "main.h"
/**
 * swap_int - swap two integers
 * @n - pointer 1
 * @n - pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
