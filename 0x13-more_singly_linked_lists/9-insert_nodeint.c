/**
  *insert_nodeint_at_index - inserts node at index
  *@head: pointr to a pointer that points to a node
  *@idx: index to add node to
  *@n: data to be placed at node
  *Return: address of the new node
  */
#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *ptr2, *ptr3;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	ptr2 = *head;
	ptr3 = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}

	while (i < idx && ptr2 != NULL)
	{
		ptr3 = ptr2;
		ptr2 = ptr2->next;
		i++;
	}

	if (i < idx)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = ptr2;
	ptr3->next = ptr;
	return (ptr);
}
