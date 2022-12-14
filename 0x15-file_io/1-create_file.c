#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 *
 * @filename: pointer to filename to create
 * @text_content: null terminated string to write to
 *
 * Return: 1 if successful, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd, cr, len = 0, i;

	if (text_content != NULL)
	{
		for (i = 0; i < text_content[i]; i++)
			len++;
	}

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	cr = write(fd, text_content, len);

	if (fd == -1 || cr == -1)
		return (-1);

	close(fd);

	return (1);
}
