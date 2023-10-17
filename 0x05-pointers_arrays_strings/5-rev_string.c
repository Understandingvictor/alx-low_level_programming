/**
*rev_string -  a function that reverses a string.
*@s: param. it takes
*Return: 0 upon completion
*/

void rev_string(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	while (l >= 0)
	{	_putchar(s[l]);
			l--;
	}
}
