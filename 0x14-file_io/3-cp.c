#include "holberton.h"

/**
 * error97 - spits out error 97 if the num of arguments is wrong
 * @argc: num of arguments
 * Return: returns void
 **/

void error97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * error98 - spits out error 98 if the file does not exist or cannot be read
 * @check: checks for true or false
 * @file: name
 * @flFrom: file descriptor or -1
 * @flTo: file descriptor or -1
 **/

void error98(ssize_t check, char *file, int flFrom, int flTo)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (flFrom != -1)
			close(flFrom);
		if (flTo != -1)
			close(flTo);
		exit(98);
	}
}

/**
 * error99 - spits out error 99 if fileTo was created
 * @check: checks for true or false
 * @file: name
 * @flFrom: file descriptor or -1
 * @flTo: file descriptor or -1
 **/

void error99(ssize_t check, char *file, int flFrom, int flTo)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (flFrom != -1)
			close(flFrom);
		if (flTo != -1)
			close(flTo);
		exit(99);
	}
}

/**
 * error100 - spits out error 100 if descriptors were not closed
 * @check: checks for true or false
 * @fl: file descriptor
 **/

void error100(int check, int fl)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl);
		exit(100);
	}
}

/**
 * main - copies content of one file to another file
 * @argc: num of arguments
 * @argv: array of pointer to arguments
 * Return: returns 0 on success
 **/

int main(int argc, char *argv[])
{
	int flFrom, flTo, closeTo, closeFrom;
	ssize_t length1, length2;
	char buffer[1024];
	mode_t file_perm;

	error97(argc);
	flFrom = open(argv[1], O_RDONLY);
	error98((ssize_t)flFrom, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	flTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	error99((ssize_t)flTo, argv[2], flFrom, -1);
	length1 = 1024;
	while (length1 == 1024)
	{
		length1 = read(flFrom, buffer, 1024);
		error98(length1, argv[1], flFrom, flTo);
		length2 = write(flTo, buffer, length1);
		if (length2 != length1)
			length2 = -1;
		error99(length2, argv[2], flFrom, flTo);
	}
	closeTo = close(flTo);
	closeFrom = close(flFrom);
	error100(closeTo, flTo);
	error100(closeFrom, flFrom);
	return (0);
}
