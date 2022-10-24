#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print numberz starting from
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ent;

	for (ent = '0'; ent <= '9'; ent++)
	putchar(ent);
	putchar('\n');

	return (0);
}
