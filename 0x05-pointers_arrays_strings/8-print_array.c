#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 *
 * Description: prints n elements of an array
 * @a: pointer to array
 * @n: int
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x + 1 < n)
			printf(", ");
	}
	printf("\n");
}
