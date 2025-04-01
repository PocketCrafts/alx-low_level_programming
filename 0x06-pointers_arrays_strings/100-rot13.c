#include "main.h"

/**
 * rot13 - function
 *
 * Description: encodes string using rot13
 * @s: pointer to string
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	int x;
	int y;
	char *t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\0";
	char *v = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm\0";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; t[y] != '\0'; y++)
		{
			if (s[x] == t[y])
			{
				s[x] = v[y];
				break;
			}
		}
	}
	return (s);
}
