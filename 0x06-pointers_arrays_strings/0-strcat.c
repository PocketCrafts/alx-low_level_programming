#include "main.h"

/**
 * _strcat - funtion
 *
 * Description: concats two strings
 * @src: pointer to str
 * @dest: pointer to str
 * Return: pointer to string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y = 0;

	for (x = 0; dest[x] != '\0'; x++)
	{
		if (dest[x + 1] == '\0' && src[y] != '\0')
		{
			dest[x + 1] = src[y], dest[x + 2] = '\0';
			y++;
		}
	}
	return (dest);
}
