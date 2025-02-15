#include <stdio.h>

void DecToBin(int n, int bin[64]) {
    for (int i = 0; i < 64; i++) { 
        bin[i] = 0;
    }

    int i = 63;  
        while (n > 0 && i >= 0) {
        bin[i] = n % 2;
        n /= 2;
        i--;
    }
}

int main() {
    int n;
    int bin[64];

    scanf("%d", &n);
    if (n > 999) {
        printf("0\n");
        return 0;
    }

    DecToBin(n, bin);
    int count = 0;
    for (int i = 0; i < 64; i++) {  
        if (bin[i] == 0) {
            count++;
        } else {
            break; 
        }
    }

    printf("%d\n", count);
    return 0;
}
