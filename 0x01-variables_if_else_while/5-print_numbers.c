#include <stdio.h>
#include <stdlib.h>
/**
 *main -Entry Point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n += 1;
	}
	return (0);
}
