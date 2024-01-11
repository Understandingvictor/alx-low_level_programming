/**
  *_strlen_recursion - returns the length of string
  *@s: parameter to be taken
  *Return: int upon success
  */

#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
