#include "main.h"
#include "main.h"
/**
 * _strlen - hi
 * Description - ss
 * @s : p
 * Return: hi
 **/
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * create_file - hi
 * @filename: hi
 * @text_content: hi
 * Return: hi
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	return (1);
}
