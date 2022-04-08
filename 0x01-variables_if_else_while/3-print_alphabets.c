#include <stdio.h>
/**
 * prints the alphabets in lower case and then i upper case
 * follwed by new line
 */
int main(void)
{ 
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
