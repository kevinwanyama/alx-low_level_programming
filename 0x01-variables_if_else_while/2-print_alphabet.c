#include <stdio.h>

/**
 * prints alphabets in loweercase
 * new line beneath theb alphabets
 * retunrn(0) success
 */
int main(void)
{
	char ch;

	for (ch ='a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
