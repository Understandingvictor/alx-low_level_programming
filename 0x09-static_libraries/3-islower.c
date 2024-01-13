/**
*_islower - checks for lowercase character
*@c: the parameter to be checked.
*Return: 0 upon succecc
*/

#include "main.h"

int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
