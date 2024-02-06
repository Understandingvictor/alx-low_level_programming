/**
  *free_listint - frees a listint_t list
  *@head: pointer to the node
  *Return: nothing, only frees the memory or link part of the node
  */
#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
