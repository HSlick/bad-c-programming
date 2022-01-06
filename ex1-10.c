#include <stdio.h>

/* copy input to output; replace tabs, backspace and backslash with \t,
\b and \\ respectively */

int main()
{
	int c, d;

	while ( (c=getchar()) != EOF) {
	d = 0;
	if (c == '\\') {
		putchar('\\');
		putchar('\\');
		d = 1;
	}
	if (c == '\t') {
		putchar('\\');
		putchar('t');
		d = 1;
	}
	if (c == '\b') {
		putchar('\\');
		putchar('b');
		d = 1;
	}
	if (d == 0)
		putchar(c);
	}
	return 0;
}
