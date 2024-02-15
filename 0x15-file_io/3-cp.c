#include "main.h"
#define BUFFER_SIZE 1024
/**
  *checkfd - checks if file is available
  *@fd: file descriptor to check
  *@filename: name of file to describe
  *Return: nothing
  */

void checkfd(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s", filename);
		exit(98);
	}
}

/**
  *checkfd2 - checks if file is available
  *@fd: file descriptor to check
  *@filename: name of file to print out
  *Return: nothing
  */
void checkfd2(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s", filename);
		exit(99);
	}
}



/**
  *error_close_fd - handles errors while closing file descriptors
  *@fd: value for file descriptor
  *Return: nothing
  */
void error_close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: can't close fd %d", fd);
		exit(100);
	}
}


/**
  *copyfile - copies the content of a file to another
  *@file_from: source file
  *@file_to: destination file
  *Return: 1 on successful creation
  */

void copyfile(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	checkfd(fd_from, file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	checkfd2(fd_to, file_to);

	if (fd_to == -1)
		error_close_fd(fd_from);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			error_close_fd(fd_from);
			error_close_fd(fd_to);
		}
	}

	if (bytes_read == -1)
	{
		error_close_fd(fd_from);
		error_close_fd(fd_to);
	}

	error_close_fd(fd_from);
	error_close_fd(fd_to);
}

/**
  *main - copies the content of a file to another
  *@ac: argument count
  *@av: argument vectors
  *Return: 1 upon success
  */

int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copyfile(av[1], av[2]);
	return (0);
}
