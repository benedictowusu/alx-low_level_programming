#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filen;
	ssize_t wri;
	ssize_t tread;

	filen = open(filename, O_RDONLY);

	if (filen == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	tread = read(filen, buffer, letters);
	wri = write(STDOUT_FILENO, buffer, tread);
	free(buffer);
	close(filen);
	return (wri);
}
