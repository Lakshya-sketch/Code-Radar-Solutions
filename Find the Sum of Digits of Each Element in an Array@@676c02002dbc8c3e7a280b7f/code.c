#include <stdio.h>

void digit_sum(int arr[]){
    int sum = 0;
    int number;
    numer = arr[i];
    while (a >= 0){
        sum = sum + (number % 10);
        number = number/10;
    }
    return sum;
}

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for ( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    for ( int i = 0 ; i < a; i++){
        printf("%d",digit_sum(int arr));
    }

    return 0;
}