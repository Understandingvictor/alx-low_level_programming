/**
  *new_dog - function that creates new dog
  *@name: parameter
  *@age: parameter
  *@owner: parameter
  *Return: a pointer to structure
*/
#include <string.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *var;

	var = malloc(sizeof(dog_t));
	var->name = strdup(name);
	var->age = age;
	var->owner = strdup(owner);

	return (var);
}
