/**
  *create_array - creates arrays of char and initializes it with specific char
  *@size: blocks of memory
  *@c: character
  *Return: 0 upon completion
  */

#include "main.h"
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
	}
	return (ptr);
}
