#ifndef hi
#define hi
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int _strlen(char *s);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
