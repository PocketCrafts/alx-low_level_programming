#include "main.h"

/**
 * swap_int - function
 *
 * Description: swaps values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 */

void swap_int(int *a, int *b)
{
	int *x;

	x = a;
	a = b;
	b = x;
}
