#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int w;

	for (w = 122; w > 96; w--)
	{
		putchar (w);
	}
	putchar('\n');
	return (0);
}
