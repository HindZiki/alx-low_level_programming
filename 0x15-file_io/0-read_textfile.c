#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read the text file print to the stdout 
 * @filename: text the file , being read .
 * @letters: number of the letter to be read .
 * Return: w- actual number of the byte read and printed .
 *        0 when function fails or file name is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
