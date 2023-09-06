#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
int a, i;
char *s;

if (str == NULL)
return (0);

a = 0;
while (*(str + a))
a++;

s = malloc(sizeof(char) * a + 1);

if (s == 0)
return (0);

for (i = 0; i <= a; i++)
{
*(s + i) = *(str + i);
}
return (s);
}
