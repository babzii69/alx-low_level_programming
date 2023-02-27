#include "main.h"

/**
 * _strcpy - A function that copies the string pointed
 * @dest: This is dest
 * @src: This is the copy
 *
 * Return: This is to return the copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
