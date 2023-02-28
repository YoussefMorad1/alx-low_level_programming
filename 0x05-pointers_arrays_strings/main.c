#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char s1[98], s2[100] = "hasdfsdafasdfasdfihi";
	char *ptr;
	ptr = _strcpy(s1, s2);
	printf("%s", s1);
	printf("%s", ptr);
	printf("\n");
	return (0);
}
