#include <stdio.h>
#include <fcntl.h>
#include "head.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char buf[letters + 1];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0 || !buf)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, letters);
	if (wr != rd || wr == -1 || rd == -1)
		return (0);
	else
		return (wr);
}
