#include <stdio.h>

int bin[32]; 
void DecToBin(int n) {
    int i = 0;
    while (n > 0) {
        bin[i] = n % 2; 
        n = n / 2;      
        i++;
    }
    for (; i < 32; i++) {
        bin[i] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    DecToBin(n); 
    int count = 0;
    for (int i = 31; i > 0; i--) {
        if (bin[i] == 0) {
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}
