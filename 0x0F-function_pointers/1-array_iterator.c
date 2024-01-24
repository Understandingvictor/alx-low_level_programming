/**
  *array_iterator - executes a function given as a parameter on each array ele.
  *@array: parameter
  *@size: parameter
  *@action: pointer to function
  *Return: 0 upon completion
  */
#include "function_pointers.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
