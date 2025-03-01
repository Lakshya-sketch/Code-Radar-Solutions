#include <stdio.h>
#include <math.h> 

void DecToBin(int n, int bin[], int *size) {
    int i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    *size = i; 
}

int BinToDec(int bin[], int size) {
    int decimal = 0;
    for (int i = 0; i < size; i++) {
        decimal += bin[i] * pow(2, i);
    }
    return decimal;
}

int main() {
    int n, position;
    int bin[32];
    int size = 0; 

    scanf("%d %d", &n, &position);

    DecToBin(n, bin, &size);

    bin[position] = (bin[position] == 0) ? 1 : 0;
    int newDecimal = BinToDec(bin, size);
    printf("%d", newDecimal);

    return 0;
}
