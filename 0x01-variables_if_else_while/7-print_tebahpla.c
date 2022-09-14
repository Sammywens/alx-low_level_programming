#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (sucess)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
