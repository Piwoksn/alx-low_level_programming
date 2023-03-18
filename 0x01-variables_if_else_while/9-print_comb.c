#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}
	putchar('\n');
	return (0);
}
