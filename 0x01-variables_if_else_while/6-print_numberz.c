#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
