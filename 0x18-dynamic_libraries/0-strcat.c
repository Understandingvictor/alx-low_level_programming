/**
*_strcat - a function that concatenates two strings.
*@dest: ist parameter holding the address of the first string
*@src: 2nd param. holding the address of the second string
*Return: 0 upon completion
*/

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
