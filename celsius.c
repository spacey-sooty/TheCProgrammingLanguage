#include <stdio.h>

int main() {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("Farenheight: %d\n", fahr);
		printf("Celsius: %d\n", celsius);
		fahr += 20;
	}
	return 0;
}

