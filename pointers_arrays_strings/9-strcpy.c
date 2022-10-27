#include "main.h"

/**
 *  _strcpy - a function that copies the string
 * @dest: string
 * @src: pointer
 * Return: 0
*/


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
			i++;								}
	*(dest + i) = '\0';

	return (dest);
}
