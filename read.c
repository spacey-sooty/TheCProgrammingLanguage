#include <stdio.h>

int main() {
	// use int so it has enough space to hold eof 
	int c;
	
	while ((c=getchar()) != EOF) {
		putchar(c);
	}
	return 0;
}
