#include <stdio.h>

void DecToBin(int n) {
    int bin[32]; 
    int i = 0;  
    while (n > 0) {
        bin[i] = n % 2; 
        n = n / 2;       
        i++;
    }
}

int main() {
    int n;
    scanf("%d %d", &n, &position);
    DecToBin(n);
    if (bin[positoin] == "0"){
        bin[positoin] = 1;
    }
    else{
        bin[position] = 0;
    }
    for(int j = i - 1; j >= 0 ; j--){
        printf("%d",bin[j]);
    }
    return 0;
}
