#include "main.h"
/**
 * _strncat - function that concatenates two strings. It will use
 * at most n bytes from arc. src does not need to be null terminated
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, w;

	/* w is a counter for n bytes of src to be concatenated */
	/* length = length of destination string */
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (w = 0; w < n && src[w] != '\0'; w++, length++)
	{
		dest[length] = src[w];
	}
	dest[length] = '\0';
	return (dest);
}
