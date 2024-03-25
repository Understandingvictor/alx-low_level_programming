/**
*_isalpha - checks wether a character is alphabet
*@c:  parameter to be checked
*Return: 0 when character is not uppercase, otherwise 1
*/

#include "main.h"

int _isalpha(int c)
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
