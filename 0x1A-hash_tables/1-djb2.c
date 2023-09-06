#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_djb2 - A well balanced hash function algorithm
* @str: a pointer to a string
*
* Return: the hash index
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
	{
		hash = ((hash << 5) + hash) + i; /* hash * 33 + i */
	}
	return (hash);
}
