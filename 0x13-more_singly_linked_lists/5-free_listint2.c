/**
  *free_listint2 - frees a listint_t list
  *@head: a pointer to a pointer that points to a node
  *Return: nothing
  */
#include "lists.h"
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
