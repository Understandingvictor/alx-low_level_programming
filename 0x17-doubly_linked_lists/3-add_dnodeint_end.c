/**
*add_dnodeint_end - add a node at the end of a doubly list
*@head: double pointer to a pointer
*@n: the new data for the new node
*Return: the address of the new element or NULL if unsuccessful
  */
#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		(*head) = temp;
		return (*head);
	}
	
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;
	temp->prev = ptr;

	return (temp);
}
