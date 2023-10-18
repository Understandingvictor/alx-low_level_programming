/**
**_strcpy - a function that copies string pointed to by src.
*@dest: parameter
*@src: parameter
*Return: 0 upon completion
*/

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
