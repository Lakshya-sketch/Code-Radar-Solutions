#include <stdio.h>

void DecToBin(int n) {
    int bin[32];
    int i = 0;   

    while (n > 0) {
        bin[i] = n % 2; 
        n = n / 2;      
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    DecToBin(n);
    return 0;
}
