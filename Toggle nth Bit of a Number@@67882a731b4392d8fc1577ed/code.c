#include <stdio.h>

void DecToBin(int n, int bin[], int *size) {
    int i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    *size = i; 
}

int main() {
    int n, posit
    int size = 0; 

    scanf("%d %d", &n, &position);

    DecToBin(n, bin, &size);
    bin[position] = (bin[position] == 0) ? 1 : 0;
    for (int j = size - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}
