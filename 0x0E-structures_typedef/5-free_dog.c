/**
  *free_dog - frees the memory allocated for d
  *@d: variable to be freed
  *Return: nothing
  */
#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
