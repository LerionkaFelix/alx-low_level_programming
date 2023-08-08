#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @src_file: source file.
 * @dest_file: destination file.
 * @argv: arguments array
 * Return: no return
 */
void error_file(int src_file, int dest_file, char *argv[])
{
	if (src_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main program responsible for copying file contents from one file to the other
 * @argc: number of cmdline arguments
 * @argv: arguments array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_file, dest_file, err_close;
	ssize_t numchars, numwritten;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp src_file dest_file");
		exit(97);
	}

	src_file = open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(src_file, dest_file, argv);

	numchars = 1024;
	while (numchars == 1024)
	{
		numchars = read(src_file, buffer, 1024);
		if (numchars == -1)
			error_file(-1, 0, argv);
		numwritten = write(dest_file, buffer, numchars);
		if (numwritten == -1)
			error_file(0, -1, argv);
	}

	err_close = close(src_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}

	err_close = close(dest_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}
	return (0);
}

