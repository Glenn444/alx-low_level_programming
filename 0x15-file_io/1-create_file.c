#include "main.h"
#include <string.h>

/**
  * create_file - ...
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
