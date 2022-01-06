#include <stdio.h>

int main()
{
	int c, blank;

	blank = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (blank == 0)
			{
				printf("%c", c);
				blank = 1;
			}
		}
		if (c != ' ')
		{
			if (blank == 1);
			{
			blank = 0;
		}
		printf("%c", c);
		}
	}

}
