/**
  *malloc_checked - allocates memory using malloc
  *@b: size
  *Return: a memory address
  */

#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
