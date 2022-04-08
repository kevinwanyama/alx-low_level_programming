#include <stdio.h>
/**
 * print single digits to base 10 starting from 0,
 * folowed with new line
 * return 0 success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
