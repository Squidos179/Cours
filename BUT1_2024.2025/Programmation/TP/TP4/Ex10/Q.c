#include <stdio.h>
#include <stdlib.h>

#define TABLE 9

void ligne(int m);

int main() {
    for (int i = 0; i <= TABLE ; i++) {
        ligne(i);
    }
    return EXIT_SUCCESS;
}

void ligne(int m) {
    for (int i = 0; i <= m + 1; i++) {
        printf("\t");
    }
    for (int i = m; i <= TABLE - m + 1; i++) {
        printf("%d\t", m*i);
    }
    printf("\n");
}