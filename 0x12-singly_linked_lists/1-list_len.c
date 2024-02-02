/**
  *list_len - rturns the number of elements of linked list
  *@h: pointer to first node
  *Return: number of elements in linked list
  */

#include "lists.h"

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
