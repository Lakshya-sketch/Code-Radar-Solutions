#include <stdio.h>

int DecToBin(int n,int bin[32]) { 
    int i = 0;  

    if (n == 0) {
        printf("0\n");
        return;
    }

    while (n > 0) {
        bin[i] = n % 2; 
        n = n / 2;       
        i++;
    }
return bin[32];
}

int main() {
    int n,bin[32];
    scanf("%d", &n);
    DecToBin(n,bin[32]);
    for( int i = 31 ; i >= 0 ; i--){
        if( bin[i] == 1){
            print("%d",i);
            break;
        }
    }
    return 0;
}
