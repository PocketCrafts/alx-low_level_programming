#include "main.h"

/**
 * _strcpy - function
 *
 * Description: copies str pointed to by src to dest
 * @src: pointer to str
 * @dest: pointer to str
 * Return: pointer to dest string
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		*(dest + x) = src[x];
		x++;
	}
	*(dest + x) = src[x];
	return (dest);
}
