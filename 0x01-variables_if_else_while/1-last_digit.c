#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry Point
 *
 *Programme that shows the last dgit of n
 *if n is greater than 5 show is greater than 5
 *if n is 0 show n is zero
 *if n is less than 6 show n is less than six and not 0
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit;

	last_digit = (n % 10);

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
