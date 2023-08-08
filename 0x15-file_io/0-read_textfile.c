#include "main.h"

/**
*read_textfile -  reads a text file and prints it to the POSIX standard output
*@filename: name of the input file
*@letters: the number of letters it should read and print
*Return: the actual number of letters it could read and print, otherwise return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int inpf;
	ssize_t words_read, words_written;
	char *buff;

	if (!filename)
		return (0);

	inpf = open(filename, O_RDONLY);

	if (inpf == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	words_read = read(inpf, buff, letters);
	words_written = write(STDOUT_FILENO, buff, words_read);

	close(inpf);

	free(buff);

	return (words_written);
}

