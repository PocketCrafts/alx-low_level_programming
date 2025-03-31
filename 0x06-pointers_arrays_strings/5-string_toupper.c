#include "main.h"

/**
 * string_toupper - function
 *
 * Description: capitalizes all letters in a string
 * @s: pointer to string
 * Return: pointer to capitalized string
 */

char *string_toupper(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 96 && s[x] < 123)
			s[x] -= 32;
	}
	return (s);
}
