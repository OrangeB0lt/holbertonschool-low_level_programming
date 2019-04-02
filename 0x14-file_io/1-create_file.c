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
 * create_file - creates file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 if good, -1 if fail
 **/

int create_file(const char *filename, char *text_content)
{
	int fl;

	ssixe_t length = 0;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_TRUSR | S_IWUSR);
	if (fl == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fl, text_content, _strlen(text_content));
	close(fl);
	if (len == -1)
		return (-1);
	return (1);
}
