/**
  *print_listint - prints  all the elements of a listint_t list
  *@h: pointer to the first node
  *Return: number of nodes
  */
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
