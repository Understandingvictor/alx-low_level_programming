/**
  *print_dlistint - prints and returns the data in a doubly list
  *@h: pointer to node
  *Return: the number of nodes
  */
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	unsigned int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
