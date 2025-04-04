#include "main.h"

/**
 * infinite_add - function
 *
 * Description: adds two numbers
 * @n1: pointer to string with number
 * @n2: pointer to string with number
 * @r: pointer to string that stores result
 * @size_r: int (size of buffer r)
 * Return: r (addition result)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_size = 0;
	int n2_size = 0;
	int temp = 0;
	int n1_temp;
	int n2_temp;

	while (n1[n1_size + 1] != '\0')
		n1_size++;
	while (n2[n2_size + 1] != '\0')
		n2_size++;
	r[size_r - 1] = '\0', size_r -= 2;
	while (size_r >= 0)
	{
		if (n1_size < 0 && n2_size < 0 && temp == 0)
			break;
		n1_temp = n1_size >= 0 ? n1[n1_size] - 48 : 0;
		n2_temp = n2_size >= 0 ? n2[n2_size] - 48 : 0;
		r[size_r] = ((n1_temp + n2_temp + temp) % 10) + 48;
		temp = (n1_temp + n2_temp + temp) / 10;
		size_r--, n1_size--, n2_size--;
	}
	if (n1_size >= 0 || n2_size >= 0 || temp > 0)
		return (0);
	return (r + (size_r + 1));
}
