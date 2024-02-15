#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
void checkfd(int fd, char *filename);
void checkfd2(int fd, char *filename);
void error_close_fd(int fd);
int copyfile(char *file_from, char *file_to);

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
 int create_file(const char *filename, char *text_content);
 int append_text_to_file(const char *filename, char *text_content);

#endif
