#include "main.h"
/** 
 * create_file - hi
 * @filename: hi
 * @text_content: hi
 * Return: hi
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	wr = write(fd, text_content);
	if (wr == -1)
		return (-1);
	return (1);
}
