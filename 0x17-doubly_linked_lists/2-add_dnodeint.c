/**
  *add_dnodeint - adds a new node at the beginning of a list
  *@head: double pointer to head pointer
  *@n: data for the new node
  *Return: a pointer to the new list
  */
#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));

	temp->n = n;
	temp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = temp;

	temp->next = *head;
	*head = temp;

	return (*head);
}
