#ifndef INNOUT
#define INNOUT
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
char *_memset(char *s, char b, unsigned int n);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
