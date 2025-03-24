#include "main.h"

/**
 * _puts - function
 *
 * Description: prints a string
 * @str: pointer to a char array
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
