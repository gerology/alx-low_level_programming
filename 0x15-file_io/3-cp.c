#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check code
 * @argc: number of arguments
 * @argv: array pointer to arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file_to_file(argv[1], argv[2]);

	return (0);
}

int close(int fd)
{
	int x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
/**
 * copy_file_to_file - copies content from one file to another
 *
 * @ff: file to copy from
 * @ft: file to copy to
 */

int copy_file_to_file(char *ff, char *ft)
{
	int  fd1, fd2, wr, rd;

	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to buffer \n");
		exit(99);
	}


	fd1 = open(ff, O_RDONLY);
	rd = read(fd1, buffer, 1024);
	if (fd1 == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ff);
		free(buffer);
		exit(98);
	}

	fd2 = open(ft, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr =  write(fd2, buffer, rd);

	if (fd2 == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ft);
		free (buffer);
		exit(99);
	}

	close(fd1);
	close(fd2);
	free(buffer);

	return (0);
}
