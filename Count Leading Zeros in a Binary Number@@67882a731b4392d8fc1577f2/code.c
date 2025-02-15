#include <stdio.h>

int DecToBin(int n) {
    int bin[32];
    int i = 0;   
    while (n > 0) {
        bin[i] = n % 2; 
        n = n / 2;      
        i++;
    }
    return bin;
}

int main(){
    int n;
    scanf("%d",&n);
    DecToBin(n);
    int count = 0;
    for( int i = 0 ; i < 32 ; i++){
        if(bin[i] == 0){
            count ++;
        }
        else{
            break;
        }
    }
    printf("%d",count);
    return 0;
}