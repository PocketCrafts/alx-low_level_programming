#include "main.h"

/**
 * _strncpy - funtion
 *
 * Description: copies src string to dest
 * @src: pointer to str
 * @dest: pointer to str
 * @n: int (no. of bytes to copy)
 * Return: pointer to string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (x < n)
	{
		if (x == n)
			break;
		dest[x] = y > 0 ? '\0' : src[x];
		if (src[x] == '\0')
			y = 1;
		x++;
	}
	return (dest);
}
