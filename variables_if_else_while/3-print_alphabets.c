#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabet in lowercase and uppercase followed by a new line
 *
 * Return: 0
 */

int main(void)
{
		char alpha, beta;

			for (alpha = 'a'; alpha <= 'z'; alpha++)
				putchar(alpha);

			for (beta = 'A'; beta <= 'Z'; beta++)
				putchar(beta);

			putchar('\n');
			return (0);
}
