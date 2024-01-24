#include "function_pointers.h"
#include <stdio.h>
/**
  *print_name - prints a name
  *@name: parameter
  *@f: pointer to a funtion
  *Return: 0 upon completion
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
