#include <stdio.h>

/**
  * main - print hexadecimal
  *
  * Return: Always 0 (sucess)
  */
int main(void)
{
	char a = 'a';
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
