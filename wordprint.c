#include <stdio.h>

/* output new word on newline */
int main()
{
	int c;
	int inspace;

	inspace = 0;
	while ((c = getchar()) != EOF) 
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if(inspace == 0)
			{
				inspace = 1;
				putchar('\n');
			}
		}	
		else
		{
			inspace = 0;
			putchar(c);
		}
	}
	return 0;
}
