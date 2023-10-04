#include <stdio.h>
#include <stdlib.h>

int main() {
	int c;
	int count;

	while ((c = getchar()) != EOF) {
		if (c == 20 || c == 9 || c == 11 || c == 10) {
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}

