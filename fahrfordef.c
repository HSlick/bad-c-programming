#include <stdio.h>

#define	LOWER	0	/* lower limit of table */
#define	UPPER	300	/* upper limit */
#define	STEP	20	/* step size */

/* print Fahrenheit-Celsius table */
int main()
{
	printf("%3s %8s\n", "Fahrenheit", "Celsius");
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%6d %11.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
