#include "main.h"

/**
 * to_hex - function
 *
 * Description: converts decimal to hex
 * @dec: decimal number
 * @ptr: pointer to store hex string
 * Return: pointer to 2-digit hex string
 */

char *to_hex(char *ptr, int dec)
{
	int x = 7;

	for (; x > 0; x--)
	{
		if (dec > 0)
		{
			ptr[x] = (dec % 16) < 10 ? (dec % 16) + 48 :
				(dec % 16) - 10 + 97;
			dec /= 16;
		}
		else
			ptr[x] = 48;
	}
	return (ptr);
}

/**
 * print_chars - function
 *
 * Description: prints a string given size
 * @str: pointer to string
 * @size: size of bytes to print
 */

void print_chars(char *str, int size)
{
	int x;

	for (x = 0; x < size; x++)
	{
		if (str[x] > 31 && str[x] < 127)
			_putchar(str[x]);
		else
			_putchar(46);
	}
}

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
	char ptr[9] = "00000000";

	for (x = 0; x < size; x += 10)
	{
		print_chars(to_hex(ptr, x), 8), _putchar(':');
		for (y = x; y < x + 10; y++)
		{
			if (y % 2 == 0)
				_putchar(' ');
			if (y < size)
				print_chars(&to_hex(ptr, b[y])[6], 2);
			else
				_putchar(' '), _putchar(' ');
		}
		_putchar(' ');
		print_chars(&b[x], x + 10 > size ? size - x : 10), _putchar('\n');
	}
	_putchar('\n');
}
