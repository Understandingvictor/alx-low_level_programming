/**
*_strlen - a function that returns the length of a string.
*@s: takes it as parameter
*Return: 0 upon completion
*/

int _strlen(char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
