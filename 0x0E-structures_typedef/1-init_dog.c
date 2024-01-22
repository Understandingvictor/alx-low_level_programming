
/**
  *init_dog - initializes a variable of type struct
  *@d: parameter
  *@name: parameter
  *@age: parameter
  *@owner: parameter
  */
#include "dog.h"
#include "stdlib.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
