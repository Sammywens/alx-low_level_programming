#include "variadic_functions.h"

/**
 * sum_them_all -  adds all the parameters passed to it
 * @n: number of args passed
 *
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int s;
	va_list sum_all;

	va_start(sum_all, n);
	if (n != 0)
	{
		for (s = 0; s < n; s++)
			sum += va_arg(sum_all, int);
	}
	va_end(sum_all);

	return (sum);
}
