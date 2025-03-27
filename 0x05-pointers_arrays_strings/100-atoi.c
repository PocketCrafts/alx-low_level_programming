#include "main.h"

/**
 * _atoi - function
 *
 * Description: converts a string to an integer
 * @s: pointer to str
 * Return: integer
 */

int _atoi(char *s)
{
	int x;
	int y = 0;
	int z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-' && z == 0)
			y++;
		if ((s[x] < 48 || s[x] > 57) && z > 0)
			break;
		if (s[x] >= 48 && s[x] <= 57)
		{
			if (z > 0 && y > 0)
			{
				z = y % 2 == 0 ? z : -(z);
				y = 0;
			}
			z *= 10;
			z = z >= 0 ? z + (s[x] - 48) : z - (s[x] - 48);
		}
	}
	return (z);
}
