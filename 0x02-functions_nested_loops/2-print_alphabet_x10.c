#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * L represents alphabets
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int L, co;

	co = 0;

	while (co < 10)
	{
		for (L = 'a'; L <= 'z'; L++)
		{
			_putchar(L);
		}
		co++;
		_putchar('\n');
	}
}
