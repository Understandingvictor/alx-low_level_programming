/**
  *str_concat - concatenates strings
  *@s1: parameter for destination string
  *@s2: parameter for source string (string being copied)
  *Return: a pointer
  */
#include <stdlib.h>
#include "main.h"
char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int strlen1 = 0;
	int strlen2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		strlen1++;
	for (i = 0; s2[i] != '\0'; i++)
		strlen2++;
	ptr = malloc(strlen1 + strlen2 + 1);
	if (ptr != NULL)
	{
		for (i = 0; i < strlen1; i++)
			ptr[i] = s1[i];
		for (i = strlen1; i < strlen1 + strlen2; i++)
		{
			ptr[i] = s2[j];
				j++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
