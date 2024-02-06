/**
  *pop_listint - deletes the head node and returns the data
  *@head: pointer that points to a pointer to a node
  *Return: the data of the head bode
  */
#include "lists.h"
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	ptr = *head;
	*head = (*head)->next;
	free(ptr);

	return (n);
}
