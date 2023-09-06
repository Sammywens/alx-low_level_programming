#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - function to get length of a string
 * @s: string
 *
 * Return: Length of a array of characters
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(const char *str)
{
	int lent = 0, i;
	char *s;

	if (str == NULL)
		return (0);

	while (*(str + lent))
		lent++;

	s = malloc(sizeof(char) * lent + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= lent; i++)
		*(s + i) = *(str + i);
	return (s);
}
/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @head: pointer to head of singly linked list
 * @str: string to add as new node in list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *tmp;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == 0)
		return (0);

	if (str == 0)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	else
	{
		tmp = _strdup(str);
		if (tmp == 0)
		{
			free(new_node);
			return (0);
		}
		new_node->str = tmp;
		new_node->len = _strlen(tmp);
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
