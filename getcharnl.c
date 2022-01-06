#include <stdio.h>

/* copy input to output; newline version */
int main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		c = getchar();
		}
	}
