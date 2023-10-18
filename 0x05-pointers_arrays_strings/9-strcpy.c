/**
**_strcpy - a function that copies string pointed to by src.
*@dest: parameter
*@src: parameter
*Return: 0 upon completion
*/

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;

		src++;
		dest_ptr++;
	}

	*dest = '\0';
	return (dest);
}
