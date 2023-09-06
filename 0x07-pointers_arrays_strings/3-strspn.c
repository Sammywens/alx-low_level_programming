#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int c, d;

for (c = 0; s[c]; c++)
{
for (d = 0; accept[d]; d++)
{
if (s[c] == accept[d])
break;
}
if (!accept[d])
break;
}
return (c);
}

