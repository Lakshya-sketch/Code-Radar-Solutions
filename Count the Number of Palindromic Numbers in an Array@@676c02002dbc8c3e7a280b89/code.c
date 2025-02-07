#include <stdio.h>

int Is_Palendrome(int num){
    int last_digit,reverse = 0;
    int original = num;    
    while (num > 0) {
        last_digit = num % 10;       
        reverse = reverse * 10 + last_digit; 
        num /= 10;               
    }
    if ( original == reverse){
        return 1;
    }
    else{
        return 0;
    }

}

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for( int i = 0 ; i < a ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for( int i = 0 ; i < a ; i ++){
        if(Is_Palendrome(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}