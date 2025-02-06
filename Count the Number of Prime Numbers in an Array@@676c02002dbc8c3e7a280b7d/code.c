#include <stdio.h>

int Prime(int num) {
    if (num < 2) 
        return 0; 
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return 0; 
    }
    return 1;
}

int main() {
    int a,count = 0;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0 ; i < a ; i ++){
        scanf("%d",&arr[i]);
    for ( int i = 0 ; i < a ; i++){
        if (Prime(arr[i])){
            count +=1;
        }
        else{
            count = 0;
        }
    }
    printf("%d",count);
    return 0;
}}