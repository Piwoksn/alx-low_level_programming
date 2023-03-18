#include <stdio.h>
#include <string.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha -= 1;
	}
	putchar('\n');
	return (0);
}
