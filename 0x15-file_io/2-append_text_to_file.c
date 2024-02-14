/**
  *append_text_to_file - appends contents into a file
  *@filename: pointer to file
  *@text_content: content to append to file
  *Return: 1 on success and -1 on failure
  */
#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK | W_OK) == -1)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	return (1);
}
