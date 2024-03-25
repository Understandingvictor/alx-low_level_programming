/**
*_strncpy - a function that copies a string.
*@dest: parameter. to be taken
*@src: Parameter to bee taken
*@n: Parameter to be taken
*Return: 0 upon success.
*/

#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
