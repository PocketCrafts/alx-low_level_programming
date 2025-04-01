#include "main.h"

/**
 * leet - function
 *
 * Description: encodes string into 1337
 * @s: pointer to string
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int x;
	int y;
	char *t = "AEOTL\0";
	char *v = "43071\0";

	for (x = 0; t[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[y] == t[x] || s[y] - 32 == t[x])
			{
				s[y] = v[x];
			}
		}
	}
	return (s);
}
