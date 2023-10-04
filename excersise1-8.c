#include <stdio.h>

int main() {
	int blanks, tabs, newlines;
	int c;

	blanks = 0;
	tabs = 0;
	newlines = 0;

	while((c = getchar()) != EOF) {

		if(c == ' ') {
			blanks++;
		}

		if(c == '\t') {
			tabs++;
		}

		if(c == '\n') {
			newlines++;
		}

	}

	printf("Blanks: %d\nTabs: %d\nLines: %d\n", blanks, tabs, newlines);
	return 0;
}

