#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char* buf = malloc(letters + 1);

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0 || !buf)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buf, letters);
	close(fd);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr != rd || wr == -1 || rd == -1)
		return (0);
	else
		return (wr);
}
