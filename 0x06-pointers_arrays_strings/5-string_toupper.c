/**
*string_toupper - changes the  all lowercase letters of a string to uppercase.
*@str: Parameter to be taken
*Return: 0 upon success
*/
char *string_toupper(char *str)
{
	if (str)
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}
	return (str);
}
