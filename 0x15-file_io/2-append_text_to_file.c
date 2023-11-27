#include "main.h"

/**
 *append_text_to_file - add txt on thebfinish of the file
 *@fname: A ptr to the filename
 *@content: the added str
 *Return: If file name 1 other -1 otherwise NULL
 */

int append_text_to_file(const char *fname, char *content)

{
	int o, w, len = 0;

	if (fname == NULL)
		return (-1);

	if (content != NULL)

	{
		for (len = 0; content[len];)
			len++;
	}

	o = open(fname, O_WRONLY | O_APPEND);
	w = write(o, content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);

}

