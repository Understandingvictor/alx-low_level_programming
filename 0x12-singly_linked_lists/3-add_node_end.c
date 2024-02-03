/**
  *add_node_end - adds a node at the end of a list list_t list
  *@head: pointer to a pointer that points to the first node
  *@str: string for the data part of the node for the string member
  *Return: pointer to the new node added.
  */
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *ptr2;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	ptr2 = *head;
	if (ptr2 == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (ptr2->next != NULL)
	{
		ptr2 = ptr2->next;
	}
	ptr2->next = ptr;
	return (ptr);
}
