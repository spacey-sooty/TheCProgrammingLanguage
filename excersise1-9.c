#include <stdio.h>
#include <stdlib.h>

int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((c = getchar()) == ' ');
			putchar(' ');
			if (c == EOF) break;
		}
		putchar(c);
	}
	return 0;
}

