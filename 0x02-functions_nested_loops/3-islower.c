/**
*_islower - checks for lowercase character
*@c: the parameter to be checked.
*Return: 0 upon succecc
*/

#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
return (0);
}
