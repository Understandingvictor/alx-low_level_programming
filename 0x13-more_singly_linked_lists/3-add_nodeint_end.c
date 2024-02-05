/**
  *add_nodeint_end - adds a new node at the end of a listint_t
  *@head: pointer to a pointer that points to a node
  *@n: data for the new node
  *Return: address to the new node
  */
#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr1, *ptr2;

	ptr1 = malloc(sizeof(listint_t));

	if (ptr1 == NULL)
		return (NULL);

	ptr1->n = n;
	ptr1->next = NULL;

	ptr2 = *head;
	if (ptr2 == NULL)
	{
		*head = ptr1;
		return (*head);
	}

	while (ptr2->next != NULL)
	{
		ptr2 = ptr2->next;
	}
	ptr2->next = ptr1;
	return (ptr1);
}
