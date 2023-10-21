/**
*_strcmp - a function that compares two strings.
*@s1: parameter to be taken
*@s2: parameter to be taken
*Return: 0 upon completion
*/
#include "main"
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}

	return ((*s1 > *s2) ? 1 : ((*s1 < *s2) ? -1 : 0));
}
