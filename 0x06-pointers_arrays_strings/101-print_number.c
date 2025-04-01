#include "main.h"

/**
 * print_number - function
 *
 * Description: prints an integer
 * @n: pointer to int
 */

void print_number(int n)
{
	unsigned int x;
	int y = 1;
	unsigned int z;

	if (n < 0)
		_putchar('-');
	z = x = n < 0 ? -n : n;
	while (x >= 10)
	{
		y *= 10, x /= 10;
	}
	while (y > 1)
	{
		_putchar((z / y) + 48);
		z %= y, y /= 10;
	}
	_putchar(z + 48);
}
