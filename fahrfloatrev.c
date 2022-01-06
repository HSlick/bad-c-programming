#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0,20, ..., 300; floating-point version */
int main()
{
	printf("%3s %6s\n", "Fahrenheit", "Celcius");

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = upper;
	while (fahr >= lower) {
		celsius = 5.0/9.0 * (fahr-32.0);
		printf("%6.0f %10.1f\n", fahr, celsius);
		fahr = fahr - step;
		}
	}
