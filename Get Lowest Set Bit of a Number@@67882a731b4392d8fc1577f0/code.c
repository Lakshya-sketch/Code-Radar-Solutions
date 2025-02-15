#include <stdio.h>

int DecToBin(int n,int *bin) { 
    int i = 0;  
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    for(int i = 31 ; i >= 0 ; i--){
        bin[i] = n % 2; 
        n = n / 2;       
    }
return *bin;
}

int main() {
    int n;
    int bin[32];
    scanf("%d", &n);
    DecToBin(n,bin);
    for( int i = 31 ; i >= 0; i--){
        if( bin[i] == 1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
