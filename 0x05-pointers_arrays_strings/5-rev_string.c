#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, half;
	char initial, final;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		initial = s[max - half];
		final = s[half];
		s[half] = initial;
		s[max - half] = final;
		half--;
	}
}
