#include "main.h"

/**
 * reverse_array - function
 *
 * Description: reverses an array of integers
 * @a: pointer to int array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y;

	for (n -= 1; n > x; n--)
	{
		y = a[x], a[x] = a[n], a[n] = y;
		x++;
	}
}
