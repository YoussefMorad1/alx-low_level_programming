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
	int fdf, fdt, wr;
	char *er, *from, *to, buf[1050];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = argv[1], to = argv[2];
	fdf = open(from, O_RDONLY);
	if (fdf < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);	
		exit(98);
	}
	fdt = open(to, O_TRUNC | O_RDWR | O_CREAT, 0661);
	if (fdt < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while (read(fdf, buf, 1024) > 0)
	{
		if (dprintf(fdt, buf) < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (close(fdt) < 0)
	{
		dprintf(2, "Error: Can't close fd %d", fdt);
		exit(100);
	}
	return (0);
}
