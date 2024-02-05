/**
  *add_nodeint - adds a new node at the begining of a list (singly)
  *@head: pointer to a pointer that points to a node
  *@n: data for the new node
  *Return: address ofthe new node added.
  */
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr2;

	ptr2 = malloc(sizeof(listint_t));

	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = *head;

	*head = ptr2;
	return (ptr2);
}
