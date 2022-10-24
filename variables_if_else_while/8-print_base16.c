#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all the numbers of base 16 in lowercase followed by a new line
 *
 * Return: 0
 */

int main(void)

{
	char alpha;
	int beta;

	for (beta = '0'; beta <= '9'; beta++)
	putchar(beta);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	putchar(alpha);
	putchar('\n');
	return (0);
}
