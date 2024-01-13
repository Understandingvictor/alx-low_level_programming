#include <stdio.h>
/**
 *_isupper - checking if character is uppercase
 *@c: c
*Return: 1 upon success
*/

int _isupper(int c)
{
	int i;
	char capitalBegin = 'A';
	char capitalEnd = 'Z';
	char found;

	while (capitalBegin <= capitalEnd)
	{
	if (c == capitalBegin)
	{
		return (1);
	}
		capitalBegin++;
	}
	return (0);
}
