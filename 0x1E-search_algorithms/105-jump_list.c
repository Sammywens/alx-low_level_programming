#include "search_algos.h"
#include <math.h>
/**
 * jump_list - a function that searches for a value
 * in a sorted singly linked list of integers using the Jump search algorithm
 * @list: the head
 * @size: size of the linked list
 * @value: the value to search for
 * Return: the address of the node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump, index, prev_index;
listint_t *tmp;

jump = (size_t)sqrt(size);
if (!list)
return (NULL);
tmp = list;
for (index = jump; index < size - 1 + jump; index += jump)
{
prev_index = index;
if (index >= size)
{
prev_index = index;
index = size - 1;
}
while (tmp && tmp->index != index)
{
tmp = tmp->next;
}
printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
if (value <= tmp->n || index == size - 1)
{
printf("Value found between indexes [%ld] and [%ld]\n",
prev_index - jump, index);
tmp = list;
while (tmp && tmp->index != prev_index - jump)
{
tmp = tmp->next;
}
while (tmp && tmp->index <= index)
{
printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
if (value == tmp->n)
return (tmp);
tmp = tmp->next;
}
}
}
return (NULL);
}
