#include "main.h"

/**
 *create_file - make a file.
 *@fname: A ptr for the txt
 *@content: A ptr to str
 *Return: -1 on failure
 */

int create_file(const char *fname, char *content)

{
	int fd, w, len = 0;

	if (fname == NULL)
		return (-1);

	if (content != NULL)

	{
		for (len = 0; content[len];)
			len++;
	}

	fd = open(fname, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(fd, content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);

}
