/**
  *free_list - frees a list
  *@head: pointer to the first node
  *Return: nothing
  */
#include "lists.h"
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
