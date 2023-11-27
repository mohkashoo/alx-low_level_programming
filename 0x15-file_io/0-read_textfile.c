#include "main.h"
#include <stdlib.h>

/**
 *read_textfile- txt file read
 *@fname:bing txt file
 *@lett: letters to be read  number
 *Return: actual write
 */

ssize_t read_textfile(const char *fname, size_t lett)

{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(fname, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * lett);

	t = read(fd, buf, lett);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);

	return (w);

}

