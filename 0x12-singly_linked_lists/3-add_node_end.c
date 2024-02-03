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
	int i = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

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
