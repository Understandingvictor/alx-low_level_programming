/**
*_strchr - a function that locates a character in a string.
*@s: param
*@c: parameter
*Return: 0 upon success
*/


#include "main.h"

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
