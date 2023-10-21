/**
*_strncat -  a function that concatenates two strings.
*@dest: parameter to be taken
*@src: parameter to be taken
*@n : param to be taken
*Return: 0 upon completion
*/

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (original_dest);
}
