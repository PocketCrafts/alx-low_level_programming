#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function
 *
 * Description: prints a buffer
 * @b: pointer to string
 * @size: size of bytes to print
 */

void print_buffer(char *b, int size)
{
	int x, y;

	if (size <= 0)
		printf("\n");
	for (x = 0; x < size; x += 10)
	{
		if (x % 10 == 0)
			printf("%08x: ", x), y = x;
		for (y = x; y < x + 10; y++)
		{
			if (y % 2 == 0 && y % 10 != 0)
				printf(" ");
			y < size ? printf("%02x", b[y]) :
				printf("  ");
		}
		printf(" ");
		for (y = x; y < size && y < x + 10; y++)
		{
			if (b[y] > 31 && b[y] < 127)
				printf("%c", b[y]);
			else
				printf(".");
		}
		printf("\n");
	}
}
