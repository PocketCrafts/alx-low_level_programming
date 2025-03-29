#include "main.h"

/**
 * _strcmp - funtion
 *
 * Description: compares two strings
 * @s1: pointer to str
 * @s2: pointer to str
 * Return: 0, - or + value if s1 is ==, > or < than s2
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	while (!y)
	{
		if (s1[x] == s2[x] && s1[x] == '\0')
			break;
		y = s2[x] - s1[x];
		x++;
	}
	return (y);
}
