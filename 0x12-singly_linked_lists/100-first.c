/**
  *__attribute__((constructor)) - causes printing execution before main
  *main(void) as constructor
  */
void printing(void) __attribute__((constructor));


/**
  *printing - prints some sentence before the main program
  *Return: nothing
  */
#include "lists.h"

void printing(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
