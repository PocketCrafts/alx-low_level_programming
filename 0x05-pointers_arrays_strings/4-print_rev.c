#include "main.h"

/**
 * print_rev - function
 *
 * Description: prints a string in reverse
 * @s: pointer to a char array
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; *(s + i) >= 0 ; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
