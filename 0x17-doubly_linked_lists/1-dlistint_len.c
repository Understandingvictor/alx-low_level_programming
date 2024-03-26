#include "lists.h"
/**
  *dlistint_len - returns the number of elements in a doubly list
  *@h: pointer to a node
  *Return: the number of elemets in a doubly list
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	unsigned int count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
