/**
  *_print_rev_recursion - prints a string in reverse order
  *@s: as a parameter
  *Return: 0 upon completion
  */

#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
