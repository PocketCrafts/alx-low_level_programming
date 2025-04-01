#include "main.h"

/**
 * cap_string - function
 *
 * Description: capitalizes words in a string
 * @s: pointer to string
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int x;
	int y;
	char *t = " \t\n,;.!?\"(){}\0";

	s[0] -= s[0] > 96 && s[0] < 123 ? 32 : 0;
	for (x = 0; t[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[y] == t[x])
			{
				if (s[y + 1] > 96 && s[y + 1] < 123)
					s[y + 1] -= 32, y++;
			}
		}
	}
	return (s);
}
