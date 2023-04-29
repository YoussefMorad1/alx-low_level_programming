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
 * main - hi
 * @argc: hi
 * @argv: hi
 * Return: hi
 */
int main(int argc, char **argv)
{
	int fdf, fdt, rd;
	char arr[1050];
	char *from, *to, *buf = arr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = argv[1], to = argv[2];
	fdf = open(from, O_RDONLY);
	if (fdf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);	
		exit(98);
	}
	fdt = open(to, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (fdt < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while (1)
	{
		rd = read(fdf, buf, 1024);
		if (rd <= 0) break;
		buf[rd] = 0;
		if (dprintf(fdt, "%s", buf) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (close(fdt) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdt);
		exit(100);
	}
	return (0);
}
