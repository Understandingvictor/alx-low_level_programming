/**
  *sum_listint - returns the sum of all the data of a linked list
  *@head: pointer to a node
  *Return: sum of the data parts of a linked list (sum of n members);
  */
#include "lists.h"
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;
	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
