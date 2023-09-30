#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	int fahr, celsius;

	fahr = LOWER;
	for (fahr = LOWER; fahr <= UPPER; fahr+=STEP) {
		celsius = 5 * (fahr - 32) / 9;
		printf("Farenheight: %d\tCelsius: %d\n", fahr, celsius);
	}
	return 0;
}

