#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabet except q and e
 * Return: 0
 */

int main(void)
{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			if (alpha != 'e' && alpha != 'q')
				putchar(alpha);
		}
				putchar('\n');
				return (0);
}

