/**
 * _memset - a function that fills memory with a constant byte
 * @s: parameter to be taken
 * @b: parameter to be taken
 * @n: parameter to be taken
 * Return: 0 upon completion
 */
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n) {
		s[i] = b;
		i++;
	}

	return s;
}
