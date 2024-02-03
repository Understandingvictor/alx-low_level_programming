/**
  *add_node - adds node at the begining of a linked list
  *@head: a pointer to the pointer that points to the first node
  *@str: value or data of the new node
  *Return: a pointer to the the head node. i.e the dummy node
  */
#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head == NULL || str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;

	*head = ptr;

	return (*head);

}
