#include <stdio.h>

/* count blanks, tabs and newlines in input */
int main()
{
	int c, nl, tabs, blanks;

	nl = 0;
	tabs = 0;
	blanks = 0;

	while ((c = getchar()) != EOF) 
{
	if (c == '\n')
		++nl;
	if (c == ' ')
		++blanks;
	if (c == '\t')
		++tabs;
		}

	printf("%d %d %d\n", nl, blanks, tabs);
}
