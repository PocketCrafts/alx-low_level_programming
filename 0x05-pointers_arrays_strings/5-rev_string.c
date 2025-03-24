#include "main.h"

/**
 * rev_string - function
 *
 * Description: reverses a string
 * @s: pointer to a char array
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char t;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i > j; i--)
	{
		t = s[j], s[j] = s[i], s[i] = t;
		j++;
	}
}
