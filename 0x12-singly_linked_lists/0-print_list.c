/**
 *print_list - prints all the elements of a list_t
 *@h: this is the pointer to the list structure
 *Return: it returns the number of nodes
 */
#include "lists.h"
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}
	return (count);
}
