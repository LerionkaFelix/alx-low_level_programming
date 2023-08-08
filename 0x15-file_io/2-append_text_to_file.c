#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the text file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 if the file exists, otherwise -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int inpf;
	int numchars;
	int writefile;

	if (!filename)
		return (-1);

	inpf = open(filename, O_WRONLY | O_APPEND);

	if (inpf == -1)
		return (-1);

	if (text_content)
	{
		for (numchars = 0; text_content[numchars]; numchars++)
			;

		writefile = write(inpf, text_content, numchars);

		if (writefile == -1)
			return (-1);
	}

	close(inpf);

	return (1);
}

