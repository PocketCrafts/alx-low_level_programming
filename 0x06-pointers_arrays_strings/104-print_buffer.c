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

	for (x = 0; x < size; x += 10)
	{
		if (x % 10 == 0)
			printf("%08x: ", x), y = x;
		for (y = x; y < x + 10; y += 2)
			y < size? printf("%02x%02x ", b[y], b[y + 1]) :
				printf("%5c", 32);
		for (y = x; y < size && y < x + 10; y++)
		{
			if (b[y] > 31 && b[y] < 127)
				printf("%c", b[y]);
			else
				printf(".");
		}
		printf("\n");
	}
	printf("\n");
}
