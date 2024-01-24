#include "function_pointers.h"
#include <stdio.h>
/**
  *functionPtr - prints a name
  *@name: parameter to take in
  *Return: nothing on completion
  */

void functionPtr(char *name)
{
	printf("%s\n", name);
}


/**
  *print_name - prints a name
  *@name: parameter
  *@f: pointer to a funtion
  *Return: 0 upon completion
  */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
