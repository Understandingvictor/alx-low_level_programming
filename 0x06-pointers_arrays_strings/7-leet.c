/**
*leet -  a function that encodes a string into 1337.
*@str: takes this as a parameter
*Return: 0 upon success
*/

#include "main.h"
char *leet(char *str)
{
	char *original = "aeotlAEOTL";
	char *leet_code = "431701431701";
	int i, j, is_replaced;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		is_replaced = 0;

		while (original[j] != '\0' && !is_replaced)
		{
			if (str[i] == original[j])
			{
				str[i] = leet_code[j];
				is_replaced = 1;
			}
			j++;
		}
	}

	return (str);
}
