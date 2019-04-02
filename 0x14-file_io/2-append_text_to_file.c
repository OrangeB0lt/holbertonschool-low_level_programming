#include "holberton.h"

/**
 * _strlen - finds string length
 * @str: pointer to string
 * Return: length of string
 **/

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: string to add at end of file
 * Return: 1 on succeed, -1 on fail
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fl, text_content, _strlen(text_content));
	close(fl);
	if (length == -1)
		return (-1);
	return (1);
}
