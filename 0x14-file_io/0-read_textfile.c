#include "holberton.h"

/**
 * read_textfile - reads a txt file and prints it to the STD OUTPUT
 * @filename: name of the file
 * @letters: numbers of letters to read and print
 * Return: returns the number of letters it reads and prints
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buffer;
	ssize_t length1, length2;

	if (filename == NULL)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fl);
		return (0);
	}
	length1 = read(fl, buffer, letters);
	close(fl);
	if (length1 == -1)
	{
		free(buffer);
		return (0);
	}
	length2 = write(STDOUT_FILENO, buffer, length1);
	free(buffer);
	if (length1 != length2)
		return (0);
	return (length2);
}
