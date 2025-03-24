#include "main.h"

/**
 * puts_half - function
 *
 * Description: prints half of a string
 * @str: pointer to a char array
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
	{
		i++;
	}
	j = i % 2 == 0 ? i / 2 : (i - 1) / 2;
	for (j = i - j; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
