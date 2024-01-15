/**
  *_strdup -  returns a pointer to a newly allocated space in memory,
  *which contains a copy of the string given as a parameter.
  *@str: string passed as parameter
  *Return: a pointer
  */
#include <stdlib.h>
#include "main.h"
char *_strdup(char *str)
{
	int i;
	int _strlen = 0;
	char *ptr;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_strlen++;
		}
	}
	else
	{
		return (NULL);
	}

	ptr = malloc(_strlen + 1);
	if (ptr != NULL)
	{
		for (i = 0; i <= _strlen; i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}

}
