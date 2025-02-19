#include <stdio.h>

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        int start = (i % 2 == 0) ? 0 : 1;
            for (int j = 0; j < i; j++) {
            printf("%d ", start);
            start = 1 - start; 
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
