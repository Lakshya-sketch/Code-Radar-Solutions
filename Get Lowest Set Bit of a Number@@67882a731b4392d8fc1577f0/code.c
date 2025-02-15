#include <stdio.h>

void DecToBin(int n) {
    int bin[32]; 
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

}

int main() {
    int n;
    scanf("%d", &n);
    DecToBin(n);
    for( int i = 31 ; j >= 0 ; i--){
        if( bin[i] == 1){
            print("%d",i);
            break;
        }
    }
    return 0;
}
