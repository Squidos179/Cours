#include <stdio.h>
#include <stdlib.h>

#define TABLE 9

void ligne(int m);

int main() {
    for (int i = 0; i <= TABLE; i++) {
        ligne(i);
    }
    return EXIT_SUCCESS;
}

void ligne(int m) {
    for (int i = 0; i <= TABLE; i++) {
        printf("%3d", m*i);
    }
    printf("\n");
}