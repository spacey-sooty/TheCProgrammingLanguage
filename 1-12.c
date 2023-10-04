#include <stdio.h>

int main() {
        int c;

        while ((c = getchar()) != EOF) {
                printf("%c\n", c); 
        }
        return 0;
}

