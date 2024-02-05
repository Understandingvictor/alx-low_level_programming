/**
  *listint_len - returns the elements in a linked list
  *@h: pointer to the first node
  *Return: number of nodes
  */
#include "lists.h"
size_t listint_len(const listint_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
