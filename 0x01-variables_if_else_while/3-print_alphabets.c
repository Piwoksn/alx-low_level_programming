#include <stdio.h>
#include <ctype.h>
/**
 *main -Entry Point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int lowerC, upperC;

	lowerC = 'a';
	upperC = 'A';

	while (lowerC <= 'z')
	{
		putchar(lowerC);
		lowerC += 1;
	}
	while (upperC <= 'Z')
	{
		putchar(upperC);
		upperC += 1;
	}
	putchar('\n');
	return (0);
}
