#include <stdio.h>
#include <ctype.h>
/**
 *main -Entry Point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha += 1;
		}
		else
		{
			putchar(alpha);
			alpha += 1;
		}
	}
	putchar('\n');
	return (0);
}
