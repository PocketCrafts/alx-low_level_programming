#include "main.h"

/**
 * _strlen - function
 *
 * Description: computes length of string
 * @s: pointer to a char array
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
