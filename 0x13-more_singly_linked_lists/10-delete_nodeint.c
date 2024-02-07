/**
  *delete_nodeint_at_index - deletes the node at index of a liinked list
  *@head: pointr to a pointer that points to the node
  *@index: to be deleted
  *Return: 1 if successful, -1 if failed
  */
#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr, *ptr2, *ptr3;

	ptr = *head;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (i < index && ptr != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		i++;
	}

	if (i < index)
		return (-1);

	ptr3 = ptr->next;
	ptr2->next = ptr3;
	free(ptr);
	return (1);
}
