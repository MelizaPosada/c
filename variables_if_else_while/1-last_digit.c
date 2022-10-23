#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: 0
 */

int main(void)
{
	0	int n;
		int c;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		c = n % 10;
		if (c > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
		else if (c == 0)
		printf("Last digit of %d is %d and is 0\n", n, c);
		else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
		return (0);
}

