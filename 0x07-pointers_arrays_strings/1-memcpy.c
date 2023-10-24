/**
 * _memcpy - Write a function that copies memory area.
 * @dest: parameter to be taken.
 * @src: parameter to be taken.
 * @n: parameter to be taken.
 * Return: a pointer to dest.
 */
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
