#include <stdio.h>
#include <limits.h> 

void DecToBin(int n, int *bin) {  
    for (int i = 0; i < 32; i++) {  
        bin[i] = (n >> (31 - i)) & 1;  
           }
}

int countLeadingZeros(int *bin) {
    int count = 0;
    for (int i = 0; i < 32; i++) {  
        if (bin[i] == 1) {  
            break;  
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    int bin[32];

    scanf("%d", &n);  
    DecToBin(n, bin);

    int leadingZeros = countLeadingZeros(bin);
    printf("%d", leadingZeros);

    return 0;
}
