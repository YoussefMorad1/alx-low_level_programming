/**
 * get_endianness - hi
 * Return: hi
 */
int get_endianness(void)
{
	int x = 1;
	char *ptrch = (char *)&x;

	if (*ptrch)
		return (1);
	else
		return (0);
}
