/**
  *_calloc - allocates memory for an array, using malloc
  *@nmemb: parameter to take
  *@size: parameter
  *Return: memory for array
  */
#include <string.h>
#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalSize = nmemb * size;

	ptr = malloc(totalSize);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, totalSize);
	return (ptr);
}
