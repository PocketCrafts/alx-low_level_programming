#include "main.h"

/**
 * _strncat - funtion
 *
 * Description: concats n bytes of src to dest str
 * @src: pointer to str
 * @dest: pointer to str
 * @n: int
 * Return: pointer to string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y = 0;

	for (x = 0; dest[x] != '\0'; x++)
	{
		if (y == n)
			break;
		if (dest[x + 1] == '\0' && src[y] != '\0')
		{
			dest[x + 1] = src[y], dest[x + 2] = '\0';
			y++;
		}
	}
	return (dest);
}
