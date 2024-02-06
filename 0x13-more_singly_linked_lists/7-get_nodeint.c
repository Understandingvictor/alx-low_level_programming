/**
  *get_nodeint_at_index - returns the nth node of linked list.
  *@head: pointer to the head node
  *@index: node to be returned
  *Return: returns the nth node
  */

#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
