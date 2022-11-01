#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints to POSIX standard output.
 *
 * @filename: pointer to file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters if successful, 0 if failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (fd == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (wr);

}
