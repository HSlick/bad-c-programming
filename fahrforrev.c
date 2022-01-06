#include <stdio.h>

/* print Fahrenheit-Celsius table */
int main()
{
	printf("%3s %8s\n", "Fahrenheit", "Celsius");
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%6d %11.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
